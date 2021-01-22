#include <stdio.h>
#include "Funcao5.h"

int main () {

    int N1, N2, i;
    char op , c;

    do
    {
        do
        {
            printf("\nInforme o numero de colunas: ");
            fflush(stdin);
            scanf("%d", &N1);

            if (N1<=0)
            {
                printf("\nERRO: insira um valor maior que 0\n");
            }
                    
        } while (N1<=0);

        do
        {
            printf("\nInforme o numero de linhas: ");
            fflush(stdin);
            scanf("%d", &N2);

            if (N2<=0)
            {
                printf("\nERRO: insira um valor maior que 0\n");
            }
                    
        } while (N2<=0);

        printf("\nInforme um caractere: ");
        fflush(stdin);
        scanf("%c", &c);
        
        i = funcao(N1, N2, c);

        printf("\n\nDeseja repetir o programa? (S/N) ");
        fflush (stdin);
        scanf("%c", &op);
    } while (op == 'S' || op == 's');

    return(0);
} 
