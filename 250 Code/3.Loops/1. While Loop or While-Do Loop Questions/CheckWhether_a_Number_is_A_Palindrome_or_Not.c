#include <stdio.h>
void main(){
    //input 121 <----> 121
    int n,c,s=0,r;
    printf("Enter any number: ");
    scanf("%d",&n);//121
    c=n;//c=121
    while(n>0){//121>0//12>0//1>0
        r=n%10;//r=1//r=2//r=1 as r data type is int and it will neglet the .1 after the 0 digit
        s=r+(s*10);//s=1//s=12
        n=n/10;//n=12//n=1
    }
    if(c==s)
    printf("Palindrome Number");
    else
    printf("not an palindrone number");
}