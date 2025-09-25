#include <stdio.h>

int main(){
    //input 153 ---> 1*1*1+5*5*5+3*3*3=153
    //we are using arm for addition in it so that when ever we add it gets increment from 0 to another number
    int n,arm=0,r,c;
    printf("Enter any number: ");
    scanf("%d",&n);//n=153
    c=n;//c=153
    while (n>0)//153>0 //n=15>0//n=1>0//n=0 is not greater than 0 so terminate
    {
        r=n%10;//r=3//r=5//interger type so r=1
        arm=(r*r*r)+arm;//arm=27//125+27=152//152+1
        n=n/10;//n=15//n=1//n=0
    }
    if (c==arm)//153==153
    {
        printf("Armstrong number");
    }else
    {
        printf("It is not");
        
    }
    return 0;    
}