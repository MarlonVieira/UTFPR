#include <stdio.h>
#include "Quadrado.h"

int main () {

    int N1=0, LI=0, LS=0, cont=0, i;
    char op;

    do
    {
        do
        {
            printf("Informe um numero: ");
            fflush(stdin);
            scanf("%d", &N1);

            if (N1<=0)
            {
                printf("\nERRO: Informe um valor maior que 0\n");
            }
        } while (N1<=0);

        printf("O quandrado do numero eh: %d", Quadradoum(N1));

        do
        {

            printf("\n\nInforme um valor para o limite inferior de um valor: ");
            fflush(stdin);
            scanf("%d", &LI);

            if (LI<=0)
            {
                printf("\nERRO: Informe um valor maior que 0\n");
            }

            if (LI>=101)
            {
                printf("\nERRO: Informe um valor menor que 100\n");
            }            

        } while (LI<=0 || LI>=101);

        do
        {
            printf("Informe um valor para o limite superior de um valor: ");
            fflush(stdin);
            scanf("%d", &LS);

            if (LS<=0)
            {
                printf("\nERRO: Informe um valor maior que 0\n");
            }

            if (LS>=101)
            {
                printf("\nERRO: Informe um valor menor que 100\n");
            }                 

        } while (LS<=0 || LS>=101);

        if (LS<LI)
        {
            i=LS;
            LS=LI;
            LI=i;
        }
        
        for (i = LI; i <= LS; i++)
        {
            printf("%d ^ 2 = %d\n", i, Quadradoum(i));
        }
        
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}