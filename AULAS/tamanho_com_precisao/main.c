#include <stdio.h>
#include <stdlib.h>

int main(){
   int x = 450;
   float f = 250.12345;
   char s[] = "Leonardo Araujo";

   printf("Precisao em inteiros:\n");
   printf("%10.5d\n", x);
   printf("%15.12d", x);
   printf("\n\nPrecisao em ponto-flutuante:\n");
   printf("%8.2f\n", f);
   printf("Precisao em strings:\n");
   printf("%10.3s\n", s);

    return 0;
}
