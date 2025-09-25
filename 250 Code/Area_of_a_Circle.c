#include<stdio.h>
int main(){
    float r,area;
    printf("Enter the radius:");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area of circle of raduis %f is %f",r,area);
    return 0;
}