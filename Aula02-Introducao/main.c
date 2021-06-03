// Autor: Leonardo Araújo
// Data: 03/06/2021
// Objetivo: Conhecer o ambiente, formas de comentários, includes, diretivas, realizar primeiro comando de saída com uma mensagem

#include <stdio.h> // Diretivas, cabeçalho, entrada e saída de dados
#include <stdlib.h>

void main()
{
    int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("\nSoma = %d\n", soma);
    return 0;
}
