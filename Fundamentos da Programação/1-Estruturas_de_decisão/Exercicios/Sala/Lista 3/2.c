#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int n1, n2;

    printf ("Insira um primeiro numero: ");
        scanf("%d", &n1);

    printf ("Insira um segundo numero: ");
        scanf("%d", &n2);

    if ( n1 % 5 == 0 && n2 % 5 == 0)
    {
        printf("Os dois numeros sao divisiveis por 5");
    }
        else if (n1 % 5 == 0 || n2 % 5 == 0 )
        {
            printf ("Apenas um eh divisivel por 5", n1);
        }

    if  (n1 % 2 == 0 && n2 % 2 == 0)
    {
        printf("\nAmbos %d e %d sao pares", n1, n2);
    }
        else 
        {
            printf ("\nSomente um deles eh impar");
        }

    return (0);
}