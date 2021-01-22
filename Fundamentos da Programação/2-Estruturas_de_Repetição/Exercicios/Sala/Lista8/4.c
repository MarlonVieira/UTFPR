#include <stdio.h>

int main (void) {

    int N1, N2, cont=0, i=0, k=0, j=0, L, lin=0, soma=0;
    float M=0;
    char op;

    do
    {

        printf("\nInforme o valor do limite inferior: ");
        fflush(stdin);
        scanf("%d", &N1);

        do
        {
            printf("\nInforme o valor do limite superior: ");
            fflush(stdin);
            scanf("%d", &N2);

            if (N2<=N1)
            {
                printf("\nERRO: Informe o valor maior ou igual ao limite inferior.\n");
            }
            
        } while (N2<=N1 || N2<1);

        do
        {
            printf("\nInforme quantos numeros deseja imprimir por linha: ");
            fflush(stdin);
            scanf("%d", &L);

            if (L<=0)
            {
                printf("\nERRO: Informe o valor maior ou igual a 0.\n");
            }
        } while (L<=0);

        for (j = N1; j <= N2; j++)
        {
        
            if (j%2==0)
            {
                lin++;
                printf("%d\t", j);
            } 

            if (lin%L==0)
            {
                printf("\n");
            }
        }
        for (j = N1; j <= N2; j++)
        {
            if (j<0)
            {
                j*-1;
            }

            if (j%2==1)
            {
                soma=soma+j;
                k++;
            }  
        }

        M=(float)soma/k;

        printf("\nA media dos impares eh: %.2f", M);
    
        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}


