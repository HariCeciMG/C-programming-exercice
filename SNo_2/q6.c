#include<stdio.h>

int greatest_of_tree(int a,int b,int c){
    //return a>b ? (a>c ? a : c) : (b>c ? b : c);
    return a>b && a>c ? a : b > c ? b : c;
}

int main(){
    int a,b,c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    int greatest = greatest_of_tree(a,b,c);
    printf("The greatest number is: %d\n",greatest);

    return 0;
}