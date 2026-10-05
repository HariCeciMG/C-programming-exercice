#include<stdio.h>
#include<windows.h>
// #include <unistd.h> //sur linux

void animation(char *str){
    int j = 0, i = 0;

    while(j < 10){
        printf("\r%c", str[i]);
        fflush(stdout);
        i = (i +1) % strlen(str);
        j++;
        Sleep(1000);
    }

}

void displayI(char *str){
    int i = 1000;
    while(i<=3000){
        printf("%s\n",str);// %s si string et %c si charactere
        fflush(stdout);
        Sleep(i);
        i += 1000;
    }
}

int main(){
    char str[100];
    printf("entrer un mot :");
    scanf("%s",str);// %s pour lire une chaine de caractere, %c pour lire une seule caractere

//    displayI(str);
    animation(str);  
    return 0;
}