#include <stdio.h>
int main(){
    int side1, side2,side3;
    //Input the sides of triangle
    printf("Enter the sides of the traingle:");
    scanf("%d %d %d",&side1, &side2, &side3);
    //check the type of triangle
    if (side1 == side2 && side2 == side3){
        printf("Triangle is equalitral triangle.\n");

    }else if (side1 ==side2 || side1==side3 || side2==side3){
        printf("The triangle is an Isoceles Traingle.\n");
    }else{
        printf("The triangle is a Scalene Triangle.\n");
    }
    return 0;
    
}

