//input the month number and print the number of days in that month 
#include <stdio.h>

int main() {
    int monthNumber, year;

    // Input month number
    printf("Enter a month number (1-12): ");
    scanf("%d", &monthNumber);

    // Check for valid month number
    if (monthNumber < 1 || monthNumber > 12) {
        printf("Invalid month number! Please enter a number between 1 and 12.\n");
    } else {
        // Check for months with 31 days
        if (monthNumber == 1 || monthNumber == 3 || monthNumber == 5 || 
            monthNumber == 7 || monthNumber == 8 || monthNumber == 10 || 
            monthNumber == 12) {
            printf("Month %d has 31 days.\n", monthNumber);
        }
        // Check for months with 30 days
        else if (monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || 
                 monthNumber == 11) {
            printf("Month %d has 30 days.\n", monthNumber);
        }
        // Handle February
        else if (monthNumber == 2) {
            // Input year for February
            printf("Enter the year: ");
            scanf("%d", &year);

            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("Month %d (February) has 29 days (leap year).\n", monthNumber);
            } else {
                printf("Month %d (February) has 28 days.\n", monthNumber);
            }
        }
    }

    return 0;
}