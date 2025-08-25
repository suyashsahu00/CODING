#include <stdio.h>

int main() {
    int n, r;
    printf("Enter a number:");
    scanf("%d", &n); // e.g., 23

    do {
        r = n % 10; // 23 % 10 = 3 i.e r = 3 (as r is int data type)
        printf("%d", r); // 3 will print
        n = n / 10; // 23 / 10 = 2 i.e n = 2
    } while (n > 0); // 2 > 0, condition is true

    return 0;
}
