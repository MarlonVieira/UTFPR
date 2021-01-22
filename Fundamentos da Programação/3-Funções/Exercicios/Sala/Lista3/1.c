#include <stdio.h>
#include "Multiplos.h"

int main() {

    int N1, M, i=0, LI, LS;
    char op, opc;

    do
    {
        printf("1 - Mostra e soma os multiplos de um numero\n");
        printf("2 - Mostra e soma os multiplos dos numeros de um intervalo\n");     
        printf("Opcao: ");
        fflush(stdin);
        scanf ("%c", &opc);

        switch (opc)
        {
            case '1':
                do
                {
                    printf ("\nInsira um numero para a quantidade de divisores: ");
                    fflush(stdin);
                    scanf ("%d", &N1);

                    if (N1<=0)
                    {
                        printf("\nERRO: insira um valor maior que 0\n");
                    }

                } while (N1<=0); 

                do
                {
                    printf ("\nMostrar os multiplos de: ");
                    fflush(stdin);
                    scanf ("%d", &M);

                    if (M<=0)
                    {
                        printf("\nERRO: insira um valor maior que 0\n");
                    }

                } while (M<=0); 

                    printf("%d - ", N1);

                    printf("%d => Soma: %d\n", MostraMultiplos(N1, M), SomaMultiplos(N1, M));

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

                do
                {
                    printf ("\nMostrar os multiplos de: ");
                    fflush(stdin);
                    scanf ("%d", &M);

                    if (M<=0)
                    {
                        printf("ERRO: insira um valor maior que 0");
                    }

                } while (M<=0); 

                if (LS<LI)
                {
                    i=LS;
                    LS=LI;
                    LI=i;
                }

                for(i = LI; i <= LS; i++)
                {
                    printf("%d - ", i);
                    printf("%d => Soma: %d\n", MostraMultiplos(i, M), SomaMultiplos(i, M));
                } 
            break;

            default:
            printf("ERRO: opcao invalida");
            break;
        }

        

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}