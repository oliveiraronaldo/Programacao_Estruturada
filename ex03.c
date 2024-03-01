#include<stdio.h>

int main(){

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("O numero digitado foi: %d\n", numero);
    printf("O dobro do numero digitado: %d\n", numero * 2);
    printf("O triplo do numero digitado: %d\n", numero * 3);

    return 0; 
}