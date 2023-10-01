#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    
    printf("Welcome to the Simple Calculator!\n");
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter the first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Error: Invalid input for the first number.\n");
        return 1;
    }
    
    printf("Enter the second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Error: Invalid input for the second number.\n");
        return 1;
    }
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }
    
    printf("Result: %.2lf\n", result);
    
    return 0; // Return 0 to indicate successful execution
}
