#include <stdio.h>

int main() {
    float age,weight;
    printf("how old are you:");
    scanf("%f", &age);
    printf("how much do you weight:");
    scanf("%f", &weight);
    
    if(age<18){
        printf("you are not eligible for blood donation:");
        
   } else if(weight<50){
        printf("you are not eligible for blood donation:");
    }else{
        printf("you are eligible for blood donation:");
    }
    

    return 0;
}
