#include <stdio.h>
#include "Raiz.h"

int main () {

    int N1, LI, LS, i, c=0;
    char op ,opc;

    do
    {
        printf("1 - Verifica se um numero eh um quadrado perfeito");
        printf("\n2 - Mostra os numeros quadrados perfeitos que pertencem a um intervalo");

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

                if (Raiz(N1))
                {
                    printf("%d eh um quadrado perfeito ==> raiz quadrada de %d eh %d\n\n", N1, N1, Raiz(N1));
                }

                else
                {
                    printf("%d nao eh um quadrado perfeito", N1);
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
                        if (Raiz(i))
                        {
                            printf("%d eh um quadrado perfeito ==> raiz quadrada de %d eh %d\n\n", i, i, Raiz(i));/* code */
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
