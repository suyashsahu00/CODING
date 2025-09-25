#include <stdio.h>

int main() {
    int num, temp, digit, odd_sum = 0, even_sum = 0, position = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10; // Get the last digit

        if (position % 2 == 0) {
            even_sum += digit; // Sum of digits at even positions
        } else {
            odd_sum += digit; // Sum of digits at odd positions
        }

        temp /= 10; // Remove the last digit
        position++;
    }

    if ((odd_sum - even_sum) % 11 == 0) {
        printf("The number %d is divisible by 11.\n", num);
    } else {
        printf("The number %d is not divisible by 11.\n", num);
    }

    return 0;
}
