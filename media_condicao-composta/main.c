#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, med;

    printf("Digite primeira nota: ");
    scanf(" %f", &n1);

    printf("\nDigite segunda nota: ");
    scanf(" %f", &n2);

    med = (n1 + n2) / 2.0;

    if (med >= 7) {
        printf("\Sua media foi %f", med, " e voce estah aprovado.");
    }
    else {
        printf("\nSua media foi %f", med," e voce estah reprovado.");
    }

    return 0;
}
