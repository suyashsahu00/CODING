#include <stdio.h>

int main() {
    int num1, num2, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2); // e.g., num1=12, num2=18

    // Find the greater number
    max = (num1 > num2) ? num1 : num2; 

    do {
        // Check if max is divisible by both numbers
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max; // If true, lcm found
            break; // Exit the loop
        }
        max++; // Increment max by 1
    } while (1); // Infinite loop until lcm is found

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm); // e.g., LCM of 12 and 18 is: 36

    return 0;
}
