#include <stdio.h>

int main() {
    char operator;
    float num1, num2;

    printf("Enter the Operator (+, -, /, *): ");
    scanf(" %c", &operator);  

 
    if (operator == '+' || operator == '-' || operator == '*' || operator == '/') {
        printf("Enter First Number: ");
        scanf("%f", &num1); 

        printf("Enter Second Number: ");
        scanf("%f", &num2);  

       
        if (operator == '+') {
            printf("The sum is: %.2f\n", num1 + num2);
        } 
        else if (operator == '-') {
            printf("The difference is: %.2f\n", num1 - num2);        
        } 
        else if (operator == '*') {
            printf("The product is: %.2f\n", num1 * num2);    
        } 
        else if (operator == '/') {
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("The division result is: %.2f\n", num1 / num2);  
            }
        }

    } else {
        printf("Invalid operator entered. Please use +, -, *, or /.\n");
    }

    return 0;
}
