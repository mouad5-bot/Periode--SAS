#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Nous d�sirons afficher la mention obtenue par un �l�ve en fonction de la moyenne de ses notes.
    S�il a une moyenne strictement inf�rieure � 10, il est recal�.
     S�il a une moyenne entre 10 (inclus) et 12, il obtient la mention passable.
      S�il a une moyenne entre 12 (inclus) et 14, il obtient la mention assez bien. S�il a une moyenne entre 14 (inclus) et 16, il obtient la mention bien.
    S�il a une moyenne sup�rieure � 16 (inclus) il obtient la mention tr�s bien.
     Ecrire les instructions n�n�cessaires  */

    float m;


    printf("entrer votre moyenne : \n");
    scanf("%f", &m);

    if( m < 10 && m >= 0 )
        printf("tu es RECALE !");

    else if( m >= 10 && m < 12)
        printf("votre montion est PASSABLE");

    else if(m >= 12 && m < 14)
        printf("votre montion est ASSEZ BIEN");

    else if(m >= 14 && m < 16)
        printf("votre montion est BIRN");

    else if(m >= 16 && m <= 20)
        printf("votre montion est TRES BIEN");

    else
        printf("ops !!! il faut  entrer un moyenne entre 0 et 20. ");

    return 0;
}
