#include <stdio.h>
#include <stdlib.h>

/* Ecrire un programme C qui lit un entier et l'affiche invers�.
 On choisira de ne pas afficher chiffre par chiffre mais de construire l'entier invers� puis l'afficher.
Ex: si l'entr�e est 12345 on doit afficher l'entier 54321.  */



int main()
{
    int a, inverse, r;

    printf("entrer un nombre entier :");
    scanf("%d", &a);

    inverse = 0;
    while (a > 0){

        a = a%10;
        inverse = 10 * inverse + r;
        a=a/10;


    }
    printf("%d", inverse);



return 0;
}
