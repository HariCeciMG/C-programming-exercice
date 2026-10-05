#include<stdio.h>

float currency(float curr1, float curr2, float money, int choice){
    
     return choice == 0 ? (money * curr1 / curr2) : (money * curr2 / curr1);
}

int main (void ){

    float curr1, curr2, money, no;
    int choice;

    printf("Enter the current of the first money: ");
    scanf("%f",&curr1);
    printf("Enter the current of the second money: ");
    scanf("%f",&curr2);
    printf("enter the money you want to change: ");
    scanf("%f",&money);
    printf("0 for change it to the first current , other number for the second: ");
    scanf("%d",&choice);

    printf("\n -----> MONEY : %.2f", currency(curr1,curr2,money,choice));
    
    return 0;
}