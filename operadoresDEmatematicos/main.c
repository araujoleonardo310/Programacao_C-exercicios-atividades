// Autor: Leonardo Araújo
// Objetivo: Compreender como funciona os calculos na linguagem

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, z, w, k, m, n, l;
    float F;
    x = -2 * 3;
    z = 4 % 2;
    w = 8 / 4;
    k = 7 / 2;
    F = 7.0 / 2.0;
    m = w + x;
    n = m - k;
    l = pow(w,3);

    printf("X: %d\n", x);
    printf("z: %d\n", z);
    printf("w: %d\n", w);
    printf("k: %d\n", k);
    printf("F: %.2f\n", F);
    printf("M: %d\n", m);
    printf("N: %d\n", n);
    printf("O valor de %d elevado ao cubo eh %d\n", w, l);

    return 0;
}
