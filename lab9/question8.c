#include <stdio.h>
int calculate(int a, int b, char operator); 
int main() {
    int num1, num2, result;
    char operator;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    result = calculate(num1, num2, operator);
    printf("%d\n", result);
    return 0;
}
int calculate(int a, int b, char operator) {
    switch (operator) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b == 0) {
                printf("Error: Division by zero\n");
                return 0;
            } else {
                return a / b;
            }
        default:
            printf("Invalid operator\n");
            return 0;
    }
}