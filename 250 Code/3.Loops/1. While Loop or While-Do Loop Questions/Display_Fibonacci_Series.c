#include<stdio.h>
int main(){
    //0 1 1 2 3 5 8 ...N
    int n,a=0,b=1,c,i;
    printf("Enter number of term: ");
    scanf("%d",&n);//n=5
    for ( i = 1; i <=n; i++)//1<5//2<5//3<5//4<5//5<=5
    {
        printf("%d ",a);//0 1 1 2 3
        c=a+b;//0+1=1//1+1=2// 1+2=3//2+3=5//8
        a=b;//a=1//2//3//5
        b=c;//b=1//2//3//5//8
    }
    return 0;
    

}