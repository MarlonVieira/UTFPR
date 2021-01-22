#include <stdio.h>

int main (void) {

    int N1, N2, c=0, i, soma=0;
    float M;
    char op;

    do
    {
    
        do
        {
            printf("\nInforme o valor do limite inferior: ");
            scanf("%d", &N1);

            if (N1<=0)
            {
                printf("\nERRO: Informe o valor maior ou igual a 1.\n");
            }
        } while (N1<=0);

        do
        {
            printf("\nInforme o valor do limite superior: ");
            scanf("%d", &N2);

            if (N2<=N1)
            {
                printf("\nERRO: Informe o valor maior ou igual ao limite inferior.\n");
            }
        } while (N2<=N1);

        for (i = N1; i <= N2; i++)
        {
            if (i%3==0)
            {
                printf("%d\t", i);
                c++;
                soma=soma+i;
            }
        }
        
        M=(float)soma/c;

        if (M>0)
        {
            printf("\n A media dos multiplos de 3 eh: %.2f", M);
        }

        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}