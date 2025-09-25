#include<stdio.h>
//Function to calcualte gcd of two numbers
int gcd(int a,int b){
    while (b!=0){
    int temp=b;
    b=a%b;
    a=temp;
    }
    return a;
}
int main(){
    int num1,num2;
    printf("Enter two positive integer:");
    scanf("%d %d",&num1,&num2);
    printf("The GCD of numbers %d ,%d is:%d.\n",num1,num2,gcd(num1,num2));
    return 0;   
}
