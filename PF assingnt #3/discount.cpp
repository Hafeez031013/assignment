#include <stdio.h>
#include<conio.h>
int main() {
    float shop,bill;
    char ans;
    printf("enter the shopping amount:");
    scanf("%f",&shop);
    
    if(shop<2000){
        bill=shop*1;
        printf("your total bill:%.2f",bill);
    }else if(shop>2000){
        printf("Are you a member:");
        scanf(" %c",&ans);
        if(ans=='y'||ans=='Y'){
            bill=shop*0.80;
            printf("your total bill:%.2f",bill);
        }else if(ans=='n'||ans=='N'){
        
        bill=shop*0.90;
        printf("your bill is:%.2f",bill);
        }
        
        
    }

    return 0;
}
