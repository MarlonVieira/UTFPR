#include <stdio.h>
#include "Palindromo.h"

int main () {

    int N1, LI, LS, i;
    char op ,opc;

    do
    {
        printf("1 - Verifica se um numero eh palindromo");
        printf("\n2 - Mostra os numeros palindromo que pertencem a um intervalo");

        printf("\nOpcao: ");
        fflush(stdin);
        scanf("%c", &opc);

        switch (opc)
        {
            case '1':
                do
                {
                    printf("\nInforme um numero: ");
                    fflush(stdin);
                    scanf("%d", &N1);

                    if (N1<=0)
                    {
                        printf("\nERRO: insira um valor maior que 0\n");
                    }
                    
                } while (N1<=0);

                if (Palindromo(N1)==1)
                {
                    printf("%d eh palindromo", N1);
                }
                
            break;

                case '2':
                    do
                    {
                        printf("\nInforme um limite inferior: ");
                        scanf("%d", &LI);

                        if(LI<=0)
                        {
                            printf("\nERRO: insira um valor maior que 0\n");
                        }

                    } while (LI<=0);

                    do
                    {
                        printf("\nInforme o limite superior: ");
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

                    for(i = LI; i <= LS ; i++)
                    {
                        if (Palindromo(i)==1)
                        {
                            printf("%d\t", i);
                        }
                    } 
                break;

                default:
                    printf("\nERRO: opcao inserida invalida\n");
                break;
            }

        printf("\n\nDeseja repetir o programa? (S/N) ");
        fflush (stdin);
        scanf("%c", &op);
    } while (op == 'S' || op == 's');

    return(0);
} 
