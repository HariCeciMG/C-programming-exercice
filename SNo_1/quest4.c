#include<stdio.h>

void swap_number(int number1, int number2) {
    int c = number1;
    number1 = number2;
    number2 = c;
    printf("number1 = %d\nnumber2 = %d",number1,number2);
}

int main(void ){
    int number1, number2;

    printf("enter first number:");
    scanf("%d",&number1);
    printf("enter second number");
    scanf("%d",&number2);

    printf("values after exchange");
    swap_number(number1, number2);

    return 0;
}