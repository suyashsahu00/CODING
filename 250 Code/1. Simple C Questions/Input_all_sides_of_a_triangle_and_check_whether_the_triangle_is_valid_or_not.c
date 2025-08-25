#include <stdio.h>
int main(){
    float side1,side2,side3;
    //Input the sides of the triangle
    printf("Enter the length of the first side:");
    scanf("%f",&side1);
    printf("Enter the length of the second side:");
    scanf("%f",&side2);
    printf("Enter the length of the third side:");
    scanf("%f",&side3);
    //Check if the triangle is valid
    if ((side1 + side2 >side3) && (side1+side3 > side2) && (side2 + side3> side1)){
        printf("The triangle is valid.\n");
    }else{
        printf("The triangle is not valid.\n");
    }

}