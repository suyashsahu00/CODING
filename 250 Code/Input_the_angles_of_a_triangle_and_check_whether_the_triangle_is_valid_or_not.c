#include <stdio.h>
int main(){
    float angle1,angle2,angle3;
    
    printf("Enter first angle:");
    scanf("%f",&angle1);
    printf("Enter second angle:");
    scanf("%f",&angle2);
    printf("Enter third angle:");
    scanf("%f",&angle3);
    float sum=angle1+angle2+angle3;
    if (sum ==180){
        printf("Triangle is vaild");
        }
        else{
            printf("Triangle is not valid");
        }
    }
    
