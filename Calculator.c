#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

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
                printf("Error: Division by zero is not possible.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Operator not recognized.\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}
