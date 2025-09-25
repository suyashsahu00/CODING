#include <stdio.h>
int main(){
    float num1,num2;
    printf("Enter first number:");
    scanf("%f",&num1);
    printf("Enter second number:");
    scanf("%f",&num2);
    if (num1>num2){
        printf("%f is greater than %f",num1,num2);
    }else if (num1<num2){
        printf("%f is greater than %f",num2,num1);
    }else{
        printf("Number is same");
    }
        
    }

