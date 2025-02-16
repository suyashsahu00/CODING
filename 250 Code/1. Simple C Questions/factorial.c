#include <stdio.h>

// Function to calculate factorial using recursion
int factorial_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d (using recursion) = %d\n", num, factorial_recursive(num));

    return 0;
}
