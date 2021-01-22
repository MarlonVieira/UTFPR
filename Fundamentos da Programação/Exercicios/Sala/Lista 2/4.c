#include <stdio.h>
#include <stdlib.h>

int main (void) {

    char G;
    float h,x;

        printf("Insira o genero: ");
            scanf("%c", &G);


    if (G=='f' || G=='F')
    {
        printf ("Insira sua altura: ");
            scanf("%f", &h);

            x=(62.1 * h) - 44.7;

        printf("Sua peso ideal eh: %.2f", x);
    }        

        else if (G=='M' || G=='m')
        {
            printf ("Insira sua altura: ");
                scanf("%f", &h);

            x=(72.7 * h) - 58;

            printf("Sua peso ideal eh: %.2f", x);
        }
            else
            {
                printf("ERRO: Caractere inserido invalido");
            }
            
    return (0);
}