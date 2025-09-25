#include <stdio.h>

int countDigits(int num) {
    int count = 0;
    do {
        num /= 10; // Remove the last digit
        count++; // Increment count by 1
    } while (num != 0); // Continue loop until num becomes 0
    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num); // e.g., num = 12345
    printf("Number of digits: %d\n", countDigits(num)); // Number of digits: 5
    return 0;
}
