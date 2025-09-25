//The Number Is Positive or Negative
#include <stdio.h>
int main(){
    int num1;
    scanf("%d",&num1);
    if (num1==0){
        printf("%d :number is neither positvie or negative",num1);
    }else if (num1>0)
    {
        printf("%d :Number is positive",num1);
    }
    else{
        printf("%d: Number is negative",num1);
    }
    return 0;
}