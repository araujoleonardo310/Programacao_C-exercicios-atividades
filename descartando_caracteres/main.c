// Autor: Leonardo Araújo
/* Objetivo: Informar uma data, mas só armzaenar os números */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Descartando caractere durante leitura */
    int dia, mes, ano;

    printf("Digite uma data [dd/mm/aaaa]: ");
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
    printf("\nDia: %d", dia);
    printf("\nMes: %d", mes);
    printf("\nAno: %d", ano);

    return 0;
}
