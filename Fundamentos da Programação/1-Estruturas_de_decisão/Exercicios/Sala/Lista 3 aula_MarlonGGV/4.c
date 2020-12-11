#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int Ano;

    printf ("Insira um ano bissexto: ");
        scanf("%d", &Ano);



        if ((Ano % 400==0) || (Ano % 4==0) && (Ano % 100 < 0) || (Ano % 100 >0))
        {
            printf("\n%d Eh um ano bissexto", Ano);
        }
           else
           {
               printf("\n%d nao eh um ano bissexto", Ano);
           }
           


    return (0);

}