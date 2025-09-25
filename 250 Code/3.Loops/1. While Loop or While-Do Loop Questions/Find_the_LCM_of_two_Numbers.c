#include <stdio.h>

int main() {
    int num1, num2, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2); // e.g., num1=12, num2=18

    max = (num1 > num2) ? num1 : num2; // Find the greater number

    do {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break; // Exit the loop when LCM is found
        }
        max++;
    } while (1); // Infinite loop until LCM is found

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm); // LCM of 12 and 18 is: 36

    return 0;
}
