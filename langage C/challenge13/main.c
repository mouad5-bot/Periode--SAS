#include <stdio.h>
#include <stdlib.h>

int main()
{

 /*  �crivez un programme C pour afficher la valeur �quivalente en octal et en hexad�cimal.
  Entrez un nombre entier et affichez sa valeur �quivalente en octal et en hexad�cimal.    */

    int n;
    printf("entrer la valeur de n : ");
    scanf("%d", &n);
    printf("la transformation en octale de la nombre n est : %o \n", n);
    printf("la transformation en hexadecimal de la nombre  n est : %x \n", n);
    return 0;
}
