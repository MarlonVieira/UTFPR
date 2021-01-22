#include <stdio.h>
#include "Divisores.h"

int main() {

    int N1, N2, i=0, LI, LS, volta=0, mostra=0;
    char op, opc;

    do
    {
        printf("1 - Quantidade de divisores de um numero\n");
        printf("2 - Divisores de um numero\n");
        printf("3 - Divisores, quantidade e soma de um intervalo\n");
        printf("4 - Maximo Divisor Comum de dois numeros\n");        
        printf("Opcao: ");
        fflush(stdin);
        scanf ("%c", &opc);

        switch (opc)
        {
            case '1':
                do
                {
                    printf ("\nInsira um numero para a quantidade de divisores: ");
                    scanf ("%d", &N1);

                    if (N1<=0)
                    {
                        printf("ERRO: insira um valor maior que 0");
                    }

                } while (N1<=0); 

                volta=Divisores(N1);

                printf("%d divisores", volta);
                
            break;

            case '2':
                do
                {
                    printf ("\nInsira um numero para mostrar seus divisores: ");
                    scanf ("%d", &N1);

                    if (N1<=0)
                    {
                        printf("ERRO: insira um valor maior que 0");
                    }

                } while (N1<=0); 
                
                printf("%d\t", MostraDivisores(N1));

            break;

            case '3':
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

                for(i = LI; i <= LS; i++)
                {
                    printf("%d - ", i);
                    printf("%d => Qtde: %d => Soma: %d\n", MostraDivisores(i), Divisores(i), SomaDivisores(i));
                } 
            break;

            case '4':
                do
                {
                    printf ("\nInsira um numero: ");
                    scanf ("%d", &N1);

                    if (N1<=0)
                    {
                        printf("ERRO: insira um valor maior que 0");
                    }

                } while (N1<=0); 

                do
                {
                    printf ("\nInsira um segundo numero: ");
                    scanf ("%d", &N2);

                    if (N2<=0)
                    {
                        printf("ERRO: insira um valor maior que 0");
                    }

                } while (N2<=0); 

                printf("MDC: %d", MDC(N1, N2));

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