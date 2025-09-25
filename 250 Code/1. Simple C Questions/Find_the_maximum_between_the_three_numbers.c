#include <stdio.h>
int main(){
    float num1,num2,num3;
    printf("Enter the value of first number:");
    scanf("%f",&num1);
    printf("Enter the value of second number:");
    scanf("%f",&num2);
    printf("Enter the value of third number:");
    scanf("%f",&num3);
    if (num1>num2 && num1>num3){
        printf("%f is greatest number",num1);
    }else if (num2>num1 && num2>num3){
        printf("%f is grestest number",num2);
    }else 
    printf("%f is gretestt number",num3);
    return 0;
}