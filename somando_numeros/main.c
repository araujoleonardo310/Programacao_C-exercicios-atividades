#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma;

    printf("Digite um numero: ");
    scanf(" %d", &num1);
    printf("\nDigite outro numero: ");
    scanf(" %d", &num2);

    // variav�l Soma recebe soma dos n�meros digitados pelo usu�rio
    soma = num1 + num2;

    printf("\nA soma foi %d", soma);
    printf(".");
    return 0;
}
