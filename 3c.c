#include <stdio.h>
#include <math.h> // For logarithm and square root

int main() {
    int operation;
    double num1, num2, result;

    printf("Simple Calculator\n");
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithm (base 10)\n");
    printf("6. Square Root\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &operation);

    switch (operation) {
        case 1: // Addition
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case 2: // Subtraction
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 3: // Multiplication
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 4: // Division
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5: // Logarithm
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 > 0) {
                result = log10(num1);
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Logarithm of non-positive numbers is undefined.\n");
            }
            break;
        case 6: // Square Root
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Square root of negative numbers is not defined.\n");
            }
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}
