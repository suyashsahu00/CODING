#include <stdio.h>

int main() {
    // 0 1 1 2 3 5 8 ...N
    int n, a = 0, b = 1, c, i = 1;
    printf("Enter number of terms: ");
    scanf("%d", &n); // n=5

    do {
        printf("%d ", a); // 0 1 1 2 3
        c = a + b; // 0+1=1 // 1+1=2 // 1+2=3 // 2+3=5
        a = b; // a=1 // a=1 // a=2 // a=3
        b = c; // b=1 // b=2 // b=3 // b=5
        i++; // Increment i by 1
    } while (i <= n); // 1<=5 // 2<=5 // 3<=5 // 4<=5 // 5<=5

    return 0;
}
