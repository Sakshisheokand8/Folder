#include <stdio.h>

int main() {
    int year;
    printf("Welcome to the Leap Year Checker!\n");
    printf("Please enter a year: ");
    scanf("%d", &year);
    
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
        printf("A leap year has 366 days, including February 29.\n");
    } 
    else {
        printf("%d is not a leap year.\n", year);
        printf("A leap year has 365 days, with no February 29.\n");
    }
    
    return 0;
}
