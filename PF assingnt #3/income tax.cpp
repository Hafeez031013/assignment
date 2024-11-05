 #include <stdio.h>

int main() {
    float income,tax;
    printf("how much is your income;");
    scanf("%f", &income);
    
    if(income<=250000){
        printf("no tax:");
    }else if(income<=500000){
        tax=income*0.05;
        printf("your income tax is %.2f:",tax);
    }else if(income<=1000000){
        tax=income*0.1;
        printf("your income tax is %.2f:",tax);
    }else{
        tax=income*0.15;
        printf("your income tax is %.2f:",tax);
    }

    return 0;
} 
