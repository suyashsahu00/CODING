#include<stdio.h>
int main(){
    float num1,num2,num3;
    printf("Enter the number :");
    scanf("%f %f %f",&num1,&num2,&num3);
    if (num1>= num2 && num2>=num3){
        printf("The greatest number is %f\n",num1);
    } else if (num2>= num1 && num2>=num3){
        printf("The greatest number is %f\n",num2);
    } else{
        printf("The grestest number is %f\n",num3);
    }
    return 0;
}
