#include <stdio.h>
int main (){
    int n,r;
    printf("Enter a number:");
    scanf("%d",&n);//23
    while (n>0){//23>0//3>0
        r=n%10;//23%10=2 i.e r=2//3%10=3 as r is int data type
        printf("%d",r);//2will print//3 will print
        n=n/10;//23/10=3//3/10 =0 n =0 which does not satisfy the while condition
    }
    return 0;
}