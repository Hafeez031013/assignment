#include<stdio.h>

int main(){
	float income;
	char loan;
	printf("What is your monthly income:");
	scanf("%f", &income);
	
	
	if(income<30000){
		printf("you are not  eligable for loan:");
	}else if(income>=30000){
			printf("do you have any previous loan remaining:");
			scanf(" %c", &loan);
			if(loan=='y'|| loan=='Y'){
				printf("you are not eligable for loan:");
			}else if(loan=='n' || loan=='N'){
				printf("you are eligable for loan:");
			}
	}
}
