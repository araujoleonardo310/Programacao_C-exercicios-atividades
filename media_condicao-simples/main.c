#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, med;

    printf("Digite a primeira nota: ");
    scanf(" %f", &n1);

    printf("\nDigite a segunda nota nota: ");
    scanf(" %f", &n2);

    med = (n1 + n2) / 2;

    if (med >= 7.0) {
        printf("\nAluno Aprovado com media de %f.3", med);
    }
    return 0;
}


