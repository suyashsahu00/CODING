#include <stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num==0){
        printf("number is zero!");
    }else if (num<0)
    {
        printf("%d is negative",num);
    }else{
        printf("%d is positive",num);
    }
    return 0;
    
}