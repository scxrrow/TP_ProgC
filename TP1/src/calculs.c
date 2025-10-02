#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 10;
    char op = '+';

    switch (op) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %d\n", num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Result: %d\n", num1 % num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '||':
            printf("Result: %d\n", num1 || num2);
            break;
        
        case '&&':
            printf("Result: %d\n", num1 && num2);
            break;
        
        case '~':
            printf("Result: %d\n", ~num1);
            break;
        
        default:
            printf("Error: Unknown operator\n");
            break;
    }
}
