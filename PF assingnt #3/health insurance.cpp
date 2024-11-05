#include <stdio.h>

int main() {
   float age;
   char ans;
   printf("How old are you:");
   scanf("%f", &age);
   
   if(age<18){
     printf("you are not eligible for insurance");
     }else if(age>45){
         printf("do you have any illness:");
         scanf(" %c",&ans);
         if(ans=='y'||ans=='Y'){
             printf("you are not eligible for insurance");
         }else if(ans=='n'||ans=='N'){
             printf("you are eligible for insurance");
         }
     }else{
         printf("you are eligible for insurance");
     }
   
    return 0;
}
