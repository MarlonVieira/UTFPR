#include <stdio.h>
#include "Polegada.h"

int main ()

{
    float i, C, p;
    int cont=0;
    char op;

    do
    {
        do
        {
            printf("\nInforme uma medida em cm: ");
            fflush(stdin);
            scanf("%f", &C);

            if (C<=0)
            {
                printf("\nERRO: insira um numero maior que 0.\n");
            }
            
        } while (C<=0);

        printf("\nO equivalente em polegadas eh: %.2f", Polegada(C));

        printf("\n\n===== TABELA DE POLEGADAS =====\nCENTIMETROS\t  POLEGADAS\n");

        for(i = 1; i <= 20; i++)
        {
            cont++;
            printf("    %d\t\t  %.2f\n", cont, Polegada(i));
        }     

        printf("\n\nDeseja repetir o programa? (S/N) ");
        fflush (stdin);
        scanf("%c", &op);
    } while (op == 'S' || op == 's');
    
    return (0);
}