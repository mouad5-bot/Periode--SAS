#include <stdio.h>
#include <stdlib.h>

int main()
{
 /*  �crire un programme en C pour lire deux valeurs.
 Il permute les deux variables si les valeurs ne sont pas identique ou si la premi�re valeur est inf�rieure � la deuxi�me.  */

    int a, b, c;
    printf("enntere la valeur  de a et b : \n");
    scanf("%d%d",&a,&b);

    if(a != b || a < b){
        c=a;
        a=b;
        b=c;

        printf("a = %d\n", a);
        printf("b = %d \n", b);

    }
    else
    printf("  ops !!!  on peut pas faire la permutation a ces deux nombres ! \n");

    return 0;
}
