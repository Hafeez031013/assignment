#include<stdio.h>

int main(){
	int day;
	
	printf("enter a number(1-7):");
	scanf("%d", &day);
	
	if(day==1){
		printf("Monday:");
		
	}else if(day==2){
		printf("Tuesday:");
	}else if(day==3){
		printf("Wednesday:");
	}else if(day==4){
		printf("Thrusday:");
	}else if(day==5){
		printf("Friday:");
	}else if(day==6){
		printf("Saturday:");
	}else if (day==7){
	    printf("Sunday:");
	}else{
		printf("invalid input:");
	}
	
	return 0;
}