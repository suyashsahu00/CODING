#include <stdio.h>

int main() {
    // Input 10
    // Output 1+2+3+4+5+6+7+8+9+10=55
    // sum is used for addition
    int n, sum = 0, i = 1;
    printf("Enter number: ");
    scanf("%d", &n); // n=10

    do {
        sum = sum + i; // 0+1=1 // 1+2 // 3+3 ... // 45+10=55
        i++; // Increment i by 1
    } while (i <= n); // 1<=10 // 2<=10 ... // 10<=10

    printf("Sum of natural numbers: %d\n", sum);
    return 0;
}
