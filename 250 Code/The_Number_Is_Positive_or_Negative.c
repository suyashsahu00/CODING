#include <stdio.h>
int main(){
    float n;
    printf("Enter the number:");
    scanf("%f",&n);
    if(n==0){
        printf("%f is neither a positive nor a negative number",n);
    }else if(n>0){
        printf("The number %f is positive",n);
    }else
        printf("The number %f is negative ",n);
}