//input 10
//output 1+2+3+4+5+6+7+8+9+10=55
//sum is use for addition 
#include<stdio.h>
    int main(){
    int n,i,sum=0;
    printf("Enter number:");
    scanf("%d",&n);//n=10
    for ( i = 1; i <=n; i++)//1<=10//2<=10//3<=10...//10<=10
    {
        sum=sum+i;//0+1=1//1+2//3+3...//45+10=55
    }
    printf("Sum is natural number: %d",sum);
    return 0;
}