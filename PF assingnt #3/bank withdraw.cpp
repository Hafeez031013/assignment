#include <stdio.h>

int main() {
    float withdraw;
    char ans;
    
    printf("How much do want to withdraw:");
    scanf("%f", &withdraw);
    
    if(withdraw<=10000){
        printf("you can withdraw your amount:");
    }else if(withdraw>10000){
        printf("do you have special withdrawal permit:");
        scanf(" %c", &ans);
        if(ans=='y'||ans=='Y'){
            printf("you can withdraw your amount:");
        }else if(ans=='n'||ans=='N'){
            printf("you can't withdraw your amount:");
            
        }
    }else{
        printf("you can't withdraw your amount:");
    }

    return 0;
}
