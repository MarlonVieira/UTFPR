#include <stdio.h>

int main (void) {

    int N1, N2, cont=0, i=0, j=0, L, lin=0, soma=0, k=0;
    char op;
    float M;

    do
    {
        do
        {
            printf("\nInforme o valor do limite inferior: ");
            fflush(stdin);
            scanf("%d", &N1);

            if (N1<1)
            {
                printf("\nERRO: Informe o valor maior que 0.\n");
            }
        } while (N1<1);

        do
        {
            printf("\nInforme o valor do limite superior: ");
            fflush(stdin);
            scanf("%d", &N2);

            if (N2<=N1)
            {
                printf("\nERRO: Informe o valor maior ou igual ao limite inferior.\n");
            }

            if (N2<1)
            {
                printf("\nERRO: Informe o valor maior que 0.\n");
            }
            
        } while (N2<=N1 || N2<1);

        for (j = N1; j <= N2; j++)
        {
        
            cont=0;

            for(i=1; i<=j; i++)
            {
                if(j%i == 0)
                {
                    cont++;
                }
            }
            if(cont == 2)
            {
                printf("%d\t", j);
                lin++;
                if (lin%5==0)
                {
                    printf("\n");
                }
            }

            if (j%3==0 && j%7==0)
            {
                soma=soma+j;
                k++;
            }
        }   

        M=(float)soma/k;

        printf("\nA media dos multiplos de 3 e 7: %.2f", M);
    
        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}