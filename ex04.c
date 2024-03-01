#include<stdio.h>

int main(){

    int n1, n2;
    int soma;
    int subtracao;
    int multiplicacao;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &n1, &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;

    printf("O usuario digitou %d e %d.\n", n1, n2);
    printf("%d + %d = %d\n", n1, n2, soma);
    printf("%d - %d = %d\n", n1, n2, subtracao);
    printf("%d * %d = %d\n", n1, n2, multiplicacao);

    return 0;
}