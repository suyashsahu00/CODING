#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
        return 1;
    }
    return 0;
}

// Function to check if a date is valid
int isValidDate(int day, int month, int year) {
    // Check year validity
    if (year < 1900 || year > 9999) {
        return 0;
    }

    // Check month validity
    if (month < 1 || month > 12) {
        return 0;
    }

    // Check day validity
    if (day < 1 || day > 31) {
        return 0;
    }

    // Handle February month
    if (month == 2) {
        if (isLeapYear(year)) {
            return (day <= 29);
        } else {
            return (day <= 28);
        }
    }

    // Handle months with 30 days
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return (day <= 30);
    }

    // Handle months with 31 days
    return 1;
}

int main() {
    int day, month, year;

    printf("Enter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (isValidDate(day, month, year)) {
        printf("Date is valid.\n");
    } else {
        printf("Date is invalid.\n");
    }

    return 0;
}
