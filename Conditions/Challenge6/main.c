#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
    t= "abcde"
    char x, inv;

    Un mot est un palindrome s'il s'�crit de la m�me fa�on si on l'�crit � l'envers.
     "kayak" et "laval" sont des palindromes. Ecrire un programme C qui permet de d�terminer si un mot,
     consid�r� comme un tableau de caract�res, est un palindrome ou non.
     On consid�rera que le tableau, d'au plus 50 �l�ments, est initialis� dans le programme C
     */

     char pali[50], c, invers;
     int i, w, v=0;

     printf("entrer un mot: \n");
     scanf(" %s", &pali);

     w = strlen(pali);
     invers = pali;


     for (i=0; i< w/2; i++){
            c = pali[i];
            pali[i] = pali[w-i-1];
            pali[w-i-1] = c;



         }
         printf("voila  inverse de votre moot %s \n", pali);


     return 0;
     }



