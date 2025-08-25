//input the week number and print the weekday
#include <stdio.h>

int main() {
    int weeknum;

    // input number
    printf("Enter a number: ");
    scanf("%d", &weeknum);

    // input the week number and print the weekday
    if (weeknum ==1) {
        printf(" %d Sunday.\n", weeknum);
    } else if (weeknum ==2) {
        printf("%d Monday \n", weeknum);
    } else if (weeknum ==3) {
        printf("%d Tuesday \n", weeknum);
    }else if (weeknum ==4) {
        printf("%d Wednesday \n", weeknum);
    }else if (weeknum ==5) {
        printf("%d Thursday \n", weeknum);
    }else if (weeknum ==6) {
        printf("%d Friday \n", weeknum);
    }else if (weeknum ==7) {
        printf("%d Saturday \n", weeknum);
    }else {
        printf("%d not a valid week number\n", weeknum);
    }

    return 0;
}