#include <stdio.h>

long factorial(int number)
{
    if (number >= 1)
        return (number * factorial(number - 1));
    else
        return 1;
}

int main(void )
{
    int input_number;
    printf("Enter a number to calculate its factorial\n");
    scanf("%d", &input_number);

    printf("%d! = %ld\n", input_number, factorial(input_number));

    return 0;
}