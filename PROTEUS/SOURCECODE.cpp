//EX1
#include "main.h"
void init_Ex1();
void Ex1_run();


#include "Ex1.h"
int counter=0;
int status=0;

void init_Ex1(){
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
}
void Ex1_run(){
	switch(status){
		  case 0:
			  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			  counter++;
			  if(counter>=2){
				  status=1;
				  counter=0;
			  }
			  break;
		  case 1:
		 		  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		 		  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
		 		  counter++;
		 		  if(counter>=2){
		 			  status=0;
		 			  counter=0;
		 		  }
		 		  break;
		  default:
			  break;
		  }
}
 
//EX2
#include "main.h"
void init_Ex2();
void Ex2_run();

#include "Ex2.h"
int counter1=0;
int status1=0;

void init_Ex2(){
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	    HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}
void Ex2_run(){
	switch(status1){
		  case 0:
			  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
			  counter1++;
			  if(counter1>=3){
				  status1=1;
				  counter1=0;
			  }
			  break;
		  case 1:
		 	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
			  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		 		  counter1++;
		 		  if(counter1>=2){
		 			  status1=2;
		 			  counter1=0;
		 		  }
		 		  break;
		  case 2:
		 	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		 		  counter1++;
		 		  if(counter1>=5){
		 			  status1=0;
		 			  counter1=0;
		 		  }
		 		  break;
		  default:
			  break;
		  }
}

//EX3
#include "main.h"
void init_Ex3();
void Ex3_run();

#include "Ex3.h"
int counter_A=0, counter_B=0;
int status_A=0, status_B=0;

void init_Ex3(){
	    HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
	    HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
	    HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
	    HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
	    HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
	    HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
	    HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
	    HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
	    HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
	    HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
	    HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
	    HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
}
void Ex3_run(){
	switch(status_A){
		  case 0:
			  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
			  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			  HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
			  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
			  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			  counter_A++;
			  if(counter_A>=5){
				  status_A=1;
				  counter_A=0;
			  }
			  break;
		  case 1:
		 	  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
			  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
			  HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
			  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
			  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
		 		  counter_A++;
		 		  if(counter_A>=3){
		 			  status_A=2;
		 			  counter_A=0;
		 		  }
		 		  break;
		  case 2:
			  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
			  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			  HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
			  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
			  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin,RESET);
			  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
		 		  counter_A++;
		 		  if(counter_A>=2){
		 			  status_A=0;
		 			  counter_A=0;
		 		  }
		 		  break;
		  default:
			  break;
		  }
		  switch(status_B){
		  case 0:
			  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
			  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
			  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
			  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			  	  counter_B++;
			  	  if(counter_B>=3){
			  	       status_B=1;
			  	       counter_B=0;
			  	}
			    break;
		  case 1:
			  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
			  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
			  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
			  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			  counter_B++;
			  if(counter_B>=2){
				  status_B=2;
				  counter_B=0;
		 		  }
		 		  break;
		  case 2:
			  HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
			  HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
			  HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
			  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
			  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			  counter_B++;
			  if(counter_B>=5){
				  status_B=0;
				  counter_B=0;
		 		  }
		 		  break;
		  default:
			  break;
		  }
}

//EX4
#include "main.h"
void init_Ex4();
void Ex4_run();
void display7SEG(int num);

#include "Ex4.h"
int counter2=0;


void init_Ex4(){

	    HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
	    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
	    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
	    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
}
void display7SEG(int num){
	switch(num){
			  case 0:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
				  break;
			  case 1:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
				  break;
			  case 2:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  case 3:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  case 4:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  case 5:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  case 6:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  case 7:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
				  break;
			  case 8:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  case 9:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  default:
			      break;
		}
}

void Ex4_run(){
	display7SEG(counter2++);
		  if(counter2>=10)
		    counter2=0;
}

//EX5
#include "main.h"
void init_Ex5();
void Ex5_run();
void display7SEG1(int num1, int num2);

#include "Ex5.h"
int counter3=0;
int counter4=0;


void init_Ex5(){
	    HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
	    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
	    HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, SET);
	    HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, SET);
	    HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, SET);
	    HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, SET);
	    HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
	    HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, SET);
	    HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, SET);
}
void display7SEG1(int num1, int num2){
	switch(num1){
			  case 0:
				        HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
				  	    HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, SET);
				  	    HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
				  	    HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, RESET);
				  	    HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
				  	    HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, RESET);
				  	    HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
				  	    break;
			  case 1:
				        HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, SET);
			            HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
				 		HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
				 	    HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, SET);
				 		HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
				        HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, RESET);
				 		HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
				 		break;
			  case 2:
			  		    HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
			  		    HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
			  		    HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
			  		    HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, RESET);
			  		    HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
			  		    HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, SET);
			  		    HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
			  			break;
	          case 3:
			  		    HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
			  			HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
			  		    HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, SET);
			  		    HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, RESET);
			  			HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, RESET);
			  			HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, SET);
			  		    HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
			  			break;
			 case 4:
			            HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, SET);
			  			HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
			  			HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
			  			HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, SET);
			  			HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
			  			HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, SET);
			            HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, SET);
			  			break;
			case 5:
			 		HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
			 	    HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
			 		HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
			 		HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, RESET);
			 		HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
			 		HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, SET);
			 		HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
			 		break;
			case 6:
			 		HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
			 		HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
			 		HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, SET);
			 		HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, RESET);
			 		HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, RESET);
			 	    HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, SET);
			 		HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
			 		break;
		    case 7:
			 		HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, SET);
			 		HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
			 		HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
			 		HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, SET);
			 		HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
			 	    HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, SET);
			 		HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, SET);
			 		break;
			case 8:
			 		HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
			 		HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
			 		HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, SET);
			 		HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, RESET);
			 		HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, RESET);
			 	    HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, SET);
			 		HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
			 		break;
			case 9:
			 		HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, SET);
			 		HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
			 		HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
			 		HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, SET);
			 		HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
			 	    HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, SET);
			 		HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, SET);
			 		break;

			  default:
			      break;
		}

	switch(num2){
				case 0:
					        HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  	    break;
				case 1:
					        HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  	    break;
			    case 2:
				  		    HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
					  	    break;
		        case 3:
				  		    HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  	    break;
				case 4:
				            HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
					  	    break;
				case 5:
				 		    HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  	    break;
				case 6:
				 		    HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  	    break;
			    case 7:
				 		    HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  	    break;
				case 8:
				 		    HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
					  	    break;
				case 9:
				 		    HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
					  	    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
					  	    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
					  	    break;

				  default:
				      break;
			}
}

void Ex5_run(){
	display7SEG1(counter3++, counter4++);

	if(counter3>=10){
		counter3=0;
	}

    if(counter4>=10){
		counter4=0;
		  }
}


 
