#include <stdio.h>

int main() {
    int amount, notes_2000 = 0, notes_500 = 0, notes_200 = 0, notes_100 = 0, notes_50 = 0, notes_20 = 0, notes_10 = 0, notes_5 = 0, notes_2 = 0, notes_1 = 0;

    printf("Enter the amount: ");
    scanf("%d", &amount); // e.g., amount = 5789

    // Calculate the number of each denomination
    do {
        if (amount >= 2000) {
            notes_2000 = amount / 2000; // quotient
            amount %= 2000; // remainder after 2000 multiples
        } else if (amount >= 500) {
            notes_500 = amount / 500;
            amount %= 500;
        } else if (amount >= 200) {
            notes_200 = amount / 200;
            amount %= 200;
        } else if (amount >= 100) {
            notes_100 = amount / 100;
            amount %= 100;
        } else if (amount >= 50) {
            notes_50 = amount / 50;
            amount %= 50;
        } else if (amount >= 20) {
            notes_20 = amount / 20;
            amount %= 20;
        } else if (amount >= 10) {
            notes_10 = amount / 10;
            amount %= 10;
        } else if (amount >= 5) {
            notes_5 = amount / 5;
            amount %= 5;
        } else if (amount >= 2) {
            notes_2 = amount / 2;
            amount %= 2;
        } else {
            notes_1 = amount; // remaining amount
            amount = 0;
        }
    } while (amount > 0); // loop until amount becomes zero

    // Print the result
    printf("Denominations:\n");
    printf("2000: %d\n", notes_2000); // number of 2000 notes
    printf("500: %d\n", notes_500); // number of 500 notes
    printf("200: %d\n", notes_200); // number of 200 notes
    printf("100: %d\n", notes_100); // number of 100 notes
    printf("50: %d\n", notes_50); // number of 50 notes
    printf("20: %d\n", notes_20); // number of 20 notes
    printf("10: %d\n", notes_10); // number of 10 notes
    printf("5: %d\n", notes_5); // number of 5 notes
    printf("2: %d\n", notes_2); // number of 2 coins
    printf("1: %d\n", notes_1); // number of 1 coins

    return 0;
}
