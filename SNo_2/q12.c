#include<stdio.h>
#include<math.h>

void display_armstrong_number_1_to_n(int end){
    printf("Armstrong numbers from 1 to %d are:\n", end);
    for (int num = 1; num <= end; num++) {
        int originalNum = num;
        int sum = 0;
        int digits = 0;

        // Count the number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            digits++;
        }

        originalNum = num;

        // Calculate the sum of the digits raised to the power of 'digits'
        while (originalNum != 0) {
            int digit = originalNum % 10;
            sum += pow(digit, digits);
            originalNum /= 10;
        }

        // Check if the number is an Armstrong number
        if (sum == num) {
            printf("%d\n", num);
        }
    }

}

int main(){
    int end;

    printf("Enter the end number: ");
    scanf("%d", &end);

    display_armstrong_number_1_to_n(end);

    return 0;
}