#include<stdio.h>

int reverse_num(int num){
    int re = 0;

    do {
        re = (re * 10) + (num % 10);
        num = num / 10;
    } while (num != 0);

    return re;
}

int reverse_recursive_num(int num, int re){
    if(num == 0){ // condition d'arret
        return re;
    }

        re = (re * 10) + (num % 10);

        return reverse_recursive_num(num/10, re); // appel recursif
}

int main(void ){
    int number, newNum;

    printf("enter a number : ");
    scanf("%d", &number);

    newNum = reverse_num(number);
    printf("REVERSE : %d\n", newNum);

    newNum = reverse_recursive_num(number, 0);
    printf("REVERSE RECURSIVE : %d", newNum);
    return 0;
}