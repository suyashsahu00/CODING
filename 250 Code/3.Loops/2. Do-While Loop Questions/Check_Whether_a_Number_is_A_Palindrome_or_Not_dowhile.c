#include <stdio.h>

int main() {
    // Input 121 <----> 121
    int n, c, s = 0, r;
    printf("Enter any number: ");
    scanf("%d", &n); // n = 121
    c = n; // c = 121

    do {
        r = n % 10; // r = 1 // r = 2 // r = 1 (as r data type is int and it will neglect the .1 after the 0 digit)
        s = r + (s * 10); // s = 1 // s = 12 // s = 121
        n = n / 10; // n = 12 // n = 1 // n = 0
    } while (n > 0); // 121 > 0 // 12 > 0 // 1 > 0 // 0 is not greater than 0 so terminate

    if (c == s) { // 121 == 121
        printf("Palindrome Number");
    } else {
        printf("Not a palindrome number");
    }

    return 0;
}
