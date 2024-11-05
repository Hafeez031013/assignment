#include <stdio.h>

int main() {
    float urdu ,math,eng;
    float totalmarks;
    float per;
    
    printf("enter your English marks:");
    scanf("%f", &eng);
     printf("enter your urdu marks:");
     scanf("%f", &urdu);
     printf("enter your math marks:");
     scanf("%f", &math);
     
     totalmarks=eng+urdu+math;
     per=(totalmarks/300)*100;
     
     if(per>=75){
         printf("A grade.\n");
     }
         else if(per>=50){
             printf("B grade.\n");
         }
         else{
             printf("you are fail:\n");
         }
     }
