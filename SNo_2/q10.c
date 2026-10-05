#include<stdio.h>

int sum_of_digit(int num){
    int sum = 0;

    while(num != 0){
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}

int main(){
    int mum;

    printf("Enter a number: ");
    scanf("%d", &mum);

    printf("Sum of digits: %d\n", sum_of_digit(mum));
    
    return 0;

}