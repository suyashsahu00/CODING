#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table for %d:\n", num);
    do {
        printf("%d * %d = %d\n", i, num, i * num);
        i++;
    } while (i <= 10);

    return 0;
}
