#include <stdio.h>
#include "Fatorial.h"

int main() {

    int N1, i=0, SP=0, cont=0, j=0;
    float MP=0;
    char op;

    do
    {
        do
        {
            printf ("Insira um numero: ");
            scanf ("%d", &N1);

            if (N1<=0)
            {
                printf("ERRO: insira um valor maior que 0");
            }

        } while (N1<=0); 
                
        if (Fatorial(N1) && N1!=0)
        {
            printf("%d != ", N1);
                        
            for (j = N1; j >=2; j--)
            {
                printf("%d * ", j);
            }
            printf("1 = %d", Fatorial(N1));
                      
        }

        printf("\n\n=== Fatorial de 1 a 12 ===\n");

        for (i=1; i<= 12; i++) 
        {
            printf("%d != ", i);
                    
        for (j = i; j >=2; j--)
        {
            printf("%d * ", j);
        }
            printf("1 = %d\n", Fatorial(i));
        }    




        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}