#include <stdio.h>

int main (void) {

    int N1, N2, cont=0, i=0, k=0, L, lin=0;
    char op;

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

        for (k = N1; k <= N2; k++)
        {
        
            cont=0;

            for(i=1; i<=k; i++)
            {
                if(k%i == 0)
                {
                    cont++;
                }
            }
            if(cont == 2)
            {
                printf("%d\t", k);
                lin++;
                if (lin%L==0)
                {
                    printf("\n");
                }
            }
        }   
    
    
        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}