#include <stdio.h>
#include <stdlib.h>

int main()
{
    // TRABALHANDO COM TAMANHO DE CAMPOS:
    printf("%d\n", 6);
    printf("%5d\n", 6);
    printf("%10d\n, 6");
    printf("%10d\n", 700);
    printf("%c\n", 'T');
    printf("%1c\n", 'A');
    printf("%2c\n", 'B');
    printf("%3c\n", 'C');
    printf("%4c\n", 'D');
    printf("%10f\n", 23.8);

    //  ALINHANDO OS CARACTERES � ESQUERDA COM SINAL NEGATIVO
        printf("%-10d\n", 700);
    //------------------------------------------------------------

    return 0;
}
