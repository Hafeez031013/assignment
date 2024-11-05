#include<stdio.h>

int main (){
float math,science,totalmarks,per;
        printf("Enter you marks in math:");
        scanf("%f", &math);
         printf("Enter your marks in science:");
         scanf("%f",&science);
         
         totalmarks=math+science;
         per=(totalmarks/200)*100;
         
         if(per<50){
         	printf("you are not eligable for admission:");
         }else if(per<80){
         	printf("you are eligable for admission:");
         }else if(per>=80){
         		printf("you are eligable for admission and schlorship:");
     }
     }
