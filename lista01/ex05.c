#include<stdio.h>

int main(){

    int metros;
    int centimetros;

    printf("Digite a quantidade de metros para transformar em centimetros:\n");
    scanf("%d", &metros);
    centimetros = metros * 100;

    printf("\n%d metros = %d centimetros\n", metros, centimetros);

    return 0;
}