#include <stdio.h>
#include "Triangula.h"

int main () {

    int N1, LI, LS, i;
    char op ,opc;

    do
    {
        printf("1 - Verifica se um numero eh triangular");
        printf("\n2 - Mostra os numeros triangulares que pertencem a um intervalo");

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
                
                if (Triangular(N1) == 0)
                {
                    printf("\n%d nao eh triangular", N1);
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
                        Triangular(i);
                    } break;

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
