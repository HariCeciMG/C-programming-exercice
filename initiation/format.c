#include <stdio.h>

void triangleForm(char ch, int n){
    for(int i = 0 ; i <= n ; i++) {
        for(int j = 0 ; j < i ; j++){
            printf("%c ",ch);
        }
        printf("\n");
    }
}

void triangleFormInv(char ch, int n){
    for(int i = 0 ; i < n ; i++) {
        for(int j = n ; i < j ; j--){
            printf("%c ",ch);
        }
        printf("\n");
    }
}

void trianglForm2(char ch, int n ){
    int f = n-1;
    for(int j = 0 ; j < n ; j++){
        for(int i = 0 ; i < n ; i++){
            (i < f) ? printf("  ") : printf("%c ",ch);
        }
        f -= 1;
        printf("\n");
    }
}

void trianglForm2Inv(char ch, int n ){
    for(int j = 0 ; j < n ; j++){
        for(int i = 0 ; i < n ; i++){
            (i >= j) ? printf("%c ",ch) : printf("  ");
        }
        printf("\n");
    }
}

int main(void ) {
    char ch;
    int n;

    printf("entrer une charactere a afficher : ");
    scanf("%c",&ch);

    printf("entrer le nombre de ligne du format : ");
    scanf("%d",&n);

    triangleForm(ch,n);
    printf("\n");
    triangleFormInv(ch,n);
//    printf("\n");
    trianglForm2(ch,n);
    printf("\n");
    trianglForm2Inv(ch,n);

    return 0;
}