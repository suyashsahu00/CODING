#include <stdio.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10; // Remove the last digit
        count++; // Increment count by 1
    }
    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num); 
    printf("Number of digits: %d\n", countDigits(num));
    return 0;
}
