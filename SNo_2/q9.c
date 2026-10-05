#include<stdio.h>

char calculatorButton(char button, float num1, float num2){
    switch(button){
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if(num2 == 0){
                printf("Error: Division by zero.\n");
                return '\0'; // Return null character for division by zero
            }
            return num1 / num2;
        default:
            printf("Invalid button pressed.\n");
            return '\0'; // Return null character for invalid input
    }
}

int main(){
    char button;
    float num1, num2;

    printf("Enter a calculator button ( +, -, *, /): ");
    scanf(" %c", &button); // Space before %c to consume any whitespace

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    float result = calculatorButton(button, num1, num2);
    if(result != '\0'){
        printf("Result: %.2f\n", result);
    }

    return 0;
}   