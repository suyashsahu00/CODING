//Calculate the number of notes for each denomination
#include <stdio.h>

int main() {
    int amount;
    int count2000 = 0, count500 = 0, count200 = 0, count100 = 0;
    int count50 = 0, count20 = 0, count10 = 0, count5 = 0, count2 = 0, count1 = 0;

    // Input the amount
    printf("Enter the amount: ₹");
    scanf("%d", &amount);

    // Calculate the number of notes for each denomination
    if (amount >= 2000) {
        count2000 = amount / 2000;
        amount = amount % 2000;
    }
    if (amount >= 500) {
        count500 = amount / 500;
        amount = amount % 500;
    }
    if (amount >= 200) {
        count200 = amount / 200;
        amount = amount % 200;
    }
    if (amount >= 100) {
        count100 = amount / 100;
        amount = amount % 100;
    }
    if (amount >= 50) {
        count50 = amount / 50;
        amount = amount % 50;
    }
    if (amount >= 20) {
        count20 = amount / 20;
        amount = amount % 20;
    }
    if (amount >= 10) {
        count10 = amount / 10;
        amount = amount % 10;
    }
    if (amount >= 5) {
        count5 = amount / 5;
        amount = amount % 5;
    }
    if (amount >= 2) {
        count2 = amount / 2;
        amount = amount % 2;
    }
    if (amount >= 1) {
        count1 = amount;
    }

    // Print the result
    printf("Number of notes:\n");
    if (count2000 > 0) printf("₹2000: %d\n", count2000);
    if (count500 > 0) printf("₹500: %d\n", count500);
    if (count200 > 0) printf("₹200: %d\n", count200);
    if (count100 > 0) printf("₹100: %d\n", count100);
    if (count50 > 0) printf("₹50: %d\n", count50);
    if (count20 > 0) printf("₹20: %d\n", count20);
    if (count10 > 0) printf("₹10: %d\n", count10);
    if (count5 > 0) printf("₹5: %d\n", count5);
    if (count2 > 0) printf("₹2: %d\n", count2);
    if (count1 > 0) printf("₹1: %d\n", count1);

    return 0;
}