// Autor: Leonardo Araújo
/* Objetivo: conhecer a precisao de casas de varial inteira, flutuante e string */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 450;
    float f = 230.12345;
    char s[]= "Leonardo Araujo";

    printf("Precisao em inteiros:\n");
    printf("%d\n", x);
    printf("%.5d\n", x);
    printf("%.12d\n", x);
    printf("\n\nPPrecisao em ponto-flutuante: \n");
    printf("%f\n", f);
    printf("%2.f\n", f);
    printf("\n\nPrecisao literais:\n");
    printf("%s\n", s);
    printf("%.8s\n", s);
    printf("%.14s\n", s);
    return 0;
}
