#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro1;
    float F1, F2;
    char letra;
    char frase[15];

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro1);
    printf("Digite dois numeros de ponto flutuante: ");
    scanf("%f%f", &F1, &F2);
    printf("Digite um caractere: ");
    scanf(" %c", &letra);
    printf("Digite uma frase: ");
    scanf("%s", &frase);

    printf("\Numero inteiro: %d\n", inteiro1);
    printf("Ponto flutuante: %2.f e %2.f\n", F1, F2);
    printf("Caracetere: %c\n", letra);
    printf("Frase: %s\n\n", frase);
    return 0;
}
