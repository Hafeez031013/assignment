#include<stdio.h>

int main(){
    float units,bill;
    printf("enter the units you used:");
    scanf("%f",&units);
    
    if(units<=100){
        printf("no charge:");
    }else if(units<=200){
        bill=units*5;
        printf("your total bill is %.2f:", bill);
    }else if(units<=300){
        bill=units*8;
        printf("your total bill is %.2f:" , bill);
    }else{
        bill=units*10;
        printf("your total bill is %.2f:" , bill);
    }
    
      return 0; 
}
