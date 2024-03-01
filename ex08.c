#include<stdio.h>

int main(){

    int n1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    printf("N: %d\n", n1);
    printf("%d, %d, %d, %d, %d\n", n1-2, n1-1, n1, n1+1, n1+2);

    return 0;
}