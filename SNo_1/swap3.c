#include<stdio.h>

void swap_letter(char *str, char letter1, char letter2) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == letter1) {
            str[i] = letter2;
        } else if (str[i] == letter2) {
            str[i] = letter1;
        }
    }
}

void main(){
    char str[100];
    char letter1, letter2;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the first letter to swap: ");
    scanf(" %c", &letter1);
    printf("Enter the second letter to swap: ");
    scanf(" %c", &letter2);

    swap_letter(str, letter1, letter2);
    printf("String after swapping: %s\n", str);

}