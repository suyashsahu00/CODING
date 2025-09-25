#include <stdio.h>

int main() {
    int num, temp, digit, odd_sum = 0, even_sum = 0, position = 1;

    printf("Enter a number: ");
    scanf("%d", &num); // e.g., num = 23456

    temp = num; // temp = 23456

    do {
        digit = temp % 10; // digit = 6 // digit = 5 // digit = 4 // digit = 3 // digit = 2 (get the last digit)

        if (position % 2 == 0) {
            even_sum += digit; // even_sum = 6 // even_sum = 10 // even_sum = 10
        } else {
            odd_sum += digit; // odd_sum = 5 // odd_sum = 9 // odd_sum = 12
        }

        temp /= 10; // temp = 2345 // temp = 234 // temp = 23 // temp = 2 // temp = 0 (remove the last digit)
        position++; // position = 2 // position = 3 // position = 4 // position = 5 // position = 6
    } while (temp != 0); // 23456 != 0 // 2345 != 0 // 234 != 0 // 23 != 0 // 2 != 0 // 0 == 0 (continue loop until temp becomes 0)

    if ((odd_sum - even_sum) % 11 == 0) {
        printf("The number %d is divisible by 11.\n", num); // e.g., The number 23456 is not divisible by 11
    } else {
        printf("The number %d is not divisible by 11.\n", num); // e.g., The number 23456 is not divisible by 11
    }

    return 0;
}
