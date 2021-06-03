// Autor: Leonardo Araújo
// Data: 03/06/2021
// Objetivo: Conhecer os tipos de dados na programação C, valor de armazenamento,

#include <stdio.h>
#include <stdlib.h>

void main()
{
    // Valor de amarzenamento dos tipos inteiros (sem virgulas)
    printf("Tamanho de armazenamento para o tipo int: %d \n", sizeof(int));
    printf("Tamanho de armazenamento para o tipo short: %d \n", sizeof(short));
    printf("Tamanho de armazenamento para o tipo long: %d \n", sizeof(long));

    // Valor de amarzenamento dos tipos Pontos flutuantes (com virgulas)
    printf("Tamanho de armazenamento para o tipo float: %d \n", sizeof(float));
    printf("Tamanho de armazenamento para o tipo double: %d \n", sizeof(double));
    printf("Tamanho de armazenamento para o tipo long double: %d \n", sizeof(long double));

    return 0;
}
