#include <stdio.h>

int main (void) {

    int N1, i=0, j=0, cont;
    char op;

    do
    {
        do
        {
            printf("\nInforme um valor para o limite superior: ");
            fflush(stdin);
            scanf("%d", &N1);

            if (N1<=2)
            {
                printf("\nERRO: Informe um valor maior que 2.\n");
            }
        }while (N1<=2);

        for (i = 2; i <= N1; i++)
        {
        
            cont=0;

            for(j=1; j<=i; j++)
            {
                if(i%j == 0)
                {
                    cont++;
                }
            }
            if(cont == 2)
            {
                printf("%d\t", i);
            }
        }   

        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}