#include <stdio.h>
#include <stdlib.h>


int main()
{
 /*  �crivez un programme pour trouver la circonf�rence d'un rectangle.
 Prenez la longueur et la largeur du rectangle en entr�e de l'utilisateur.
La formule pour la circonf�rence d'un rectangle = 2*(longueur + largeur).    */

    int L, W, C;
    printf(" entrer la longueur et la largeur du rectangle :\n");
    scanf("%d%d", &L, &W);
    C = 2*(L + W);
    printf("la circonference de ce rectangle est %d", C);
    return 0;
}
