//the greatest number among three numbers
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check which number is the greatest
    if (num1 > num2 && num1 > num3) {
        printf("num1 is the greatest: %d\n", num1);
    } 
    else if (num2 > num1 && num2 > num3) {
        printf("num2 is the greatest: %d\n", num2);
    } 
    else {
        printf("num3 is the greatest: %d\n", num3);
    }

    return 0;
}