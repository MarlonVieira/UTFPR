#include <stdio.h>
#include "Impares.h"

int main() {

    int N1, M, i=0, LI, LS;
    char op, opc;

    do
    {
        printf("1 - Verifica se um numero equivale a soma dos impares\n");
        printf("2 - Verifica se os numeros equivalem a soma dos impares\n");     
        printf("Opcao: ");
        fflush(stdin);
        scanf ("%c", &opc);

        switch (opc)
        {
            case '1':
                do
                {
                    printf ("\nInsira um numero: ");
                    fflush(stdin);
                    scanf ("%d", &N1);

                    if (N1<=0)
                    {
                        printf("\nERRO: insira um valor maior que 0\n");
                    }

                } while (N1<=0); 

                printf("\n%d - ", N1);

                Mostraseequivale(N1);

            break;

            case '2':
                do
                {
                    printf("\nInforme um limite inferior: ");
                    fflush(stdin);
                    scanf("%d", &LI);

                    if(LI<=0)
                    {
                        printf("\nERRO: insira um valor maior que 0\n");
                    }
                } while (LI<=0);

                do
                {
                    printf("\nInforme o limite superior: ");
                    fflush(stdin);
                    scanf("%d", &LS);

                    if(LS<=0)
                    {
                        printf("\nERRO: insira um valor maior que 0\n");
                    }

                } while (LS<=0);

                if (LS<LI)
                {
                    i=LS;
                    LS=LI;
                    LI=i;
                }

                for(i = LI; i <= LS; i++)
                {
                    printf("\n%d - ", i);
                    Mostraseequivale(i);
                } 
            break;

            default:
            printf("ERRO: opcao invalida");
        }

        

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}