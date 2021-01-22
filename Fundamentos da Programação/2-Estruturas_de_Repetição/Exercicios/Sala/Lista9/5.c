#include <stdio.h>

int main (void) {

    int N1, N2, cont, j;
    char op;

    do
    {
        do
        {
            printf("\nInforme quantos numeros divisiveis por 5 e nao divisiveis por 2 deseja mostrar? ");
            fflush(stdin);
            scanf("%d", &N1);

            if (N1<0)
            {
                printf("\nERRO: Informe um valor maior que 0.\n");
            }

        }while (N1<0);

        do
        {
            printf("\nInforme quantos elementos quer mostrar por linha: ");
            fflush(stdin);
            scanf("%d", &N2);

            if (N2<0)
            {
                printf("\nERRO: Informe um valor maior que 0.\n");
            }
            
        }while (N2<0);

        j=1;
        cont=0;
        do
        {    
        
            if (j%5==0 && j%2!=0)
            {
                printf("\t%d", j);
                cont++;

                if (cont%N2==0)
                {
                    printf("\n");
                }
            }
            j++;        
        } while (cont<N1); 

        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');




    return(0);
}