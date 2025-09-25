#include <stdio.h>

int main() {
    // Input 153 ---> 1*1*1 + 5*5*5 + 3*3*3 = 153
    // We are using "arm" for addition so that whenever add, it gets incremented from 0 to another number
    int n, arm = 0, r, c;
    printf("Enter any number: ");
    scanf("%d", &n); // n = 153
    c = n; // c = 153

    do {
        r = n % 10; // r = 3 // r = 5 // integer type so r = 1
        arm = (r * r * r) + arm; // arm = 27 // 125 + 27 = 152 // 152 + 1
        n = n / 10; // n = 15 // n = 1 // n = 0
    } while (n > 0); // 153 > 0 // 15 > 0 // 1 > 0 // 0 is not greater than 0 so terminate

    if (c == arm) { // 153 == 153
        printf("Armstrong number");
    } else {
        printf("It is not");
    }

    return 0;
}
