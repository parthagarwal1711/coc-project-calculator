#include <stdio.h>   // Include standard input-output header file

int main() {
    char operator;      // Variable to store the operator (+, -, *, /, %)
    double num1, num2;  // Variables to store two numbers

    // Display welcome message
    printf("***** Simple Calculator *****\n");

    // Ask the user to enter an operator
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);  // The space before %c helps ignore any leftover newline character

    // Ask the user to enter two operands (numbers)
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the calculation based on the operator entered
    switch (operator) {
        case '+':
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;

        case '/':
            // Check for division by zero
            if (num2 != 0)
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        case '%':
            // Modulus works only with integers
            if ((int)num2 != 0)
                printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        default:
            // If an invalid operator is entered
            printf("Error! Invalid operator.\n");
    }

    // End of the program
    printf("*\n");
    return 0;  // Return 0 means program executed successfully
}
