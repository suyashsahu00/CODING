#include <stdio.h>

int main() {
    int amount, notes_2000, notes_500, notes_200, notes_100, notes_50, notes_20, notes_10, notes_5, notes_2, notes_1;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Calculate the number of each denomination
    notes_2000 = amount / 2000;//quitoent
    amount %= 2000;//after 2000multiple rest will be stored here

    notes_500 = amount / 500;
    amount %= 500;

    notes_200 = amount / 200;
    amount %= 200;

    notes_100 = amount / 100;
    amount %= 100;

    notes_50 = amount / 50;
    amount %= 50;

    notes_20 = amount / 20;
    amount %= 20;

    notes_10 = amount / 10;
    amount %= 10;

    notes_5 = amount / 5;
    amount %= 5;

    notes_2 = amount / 2;
    amount %= 2;

    notes_1 = amount;

    // Print the result
    printf("Denominations:\n");
    printf("2000: %d\n", notes_2000);
    printf("500: %d\n", notes_500);
    printf("200: %d\n", notes_200);
    printf("100: %d\n", notes_100);
    printf("50: %d\n", notes_50);
    printf("20: %d\n", notes_20);
    printf("10: %d\n", notes_10);
    printf("5: %d\n", notes_5);
    printf("2: %d\n", notes_2);
    printf("1: %d\n", notes_1);

    return 0;
}
