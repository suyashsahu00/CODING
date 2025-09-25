#include<stdio.h>
// Function to calculate GCD of two numbers
int gcd (int a,int b){
    while (b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
// Function to calculate LCM of two numbers
int lcm(int a,int b){
    return (a*b)/gcd (a,b);
}
int main(){
    int num1,num2;
    printf("Enter two positive integer:");
    scanf("%d %d",&num1,&num2);
    printf("The LCM of %d and %d is %d.\n",num1,num2,lcm(num1,num2));
    return 0;
}
