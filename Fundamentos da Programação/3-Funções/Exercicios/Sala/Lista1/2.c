#include <stdio.h>
#include "Primo.h"

int main() {

    int N1, i, SP=0, cont=0;
    float MP=0;
    char op, opc;

    do
    {
        printf("A - Verificar se um numero eh primo\n");
        printf("B - Primos entre 1 e 100\n");
        printf("C - Media dos primos entre 200 e 100\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf ("%c", &opc);

        switch (opc)
        {
            case 'A':
            case 'a':
                do
                {
                    printf ("\nInsira um numero: ");
                    fflush(stdin);
                    scanf ("%d", &N1);

                    if (N1<=0)
                    {
                        printf("ERRO: insira um valor maior que 0");
                    }

                } while (N1<=0); 

                if (Primo(N1)==0 && N1!=0)
                {
                    printf("\n%d eh um numero primo", N1);
                }

                else
                {
                    printf("\n%d nao eh um numero primo", N1);
                }

                break;

            case 'B':
            case 'b':
                for (i = 1; i <= 100; i++)
                {
                    if (Primo(i)==0 && i!=1)
                    {
                        printf("%d\t", i);
                    }
                }
                break;


            case 'C':
            case 'c':
                SP=0;
                cont=0;
                for (i = 200; i >= 100; i--)
                {
                    if (Primo(i)==0 && i!=1)
                    {
                        SP=SP+i;
                        cont++;
                    }
                }
                
                MP=(float)SP/cont;
                printf("A media dos primos entre 200 e 100 eh: %.2f", MP);

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