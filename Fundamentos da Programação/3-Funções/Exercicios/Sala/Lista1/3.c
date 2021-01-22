#include <stdio.h>
#include "Fatorial.h"

int main() {

    int N1, i=0, SP=0, cont=0, j=0;
    float MP=0;
    char op, opc;

    do
    {
        printf("A - Fatorial entre 1 e 8\n");
        printf("B - Fatorial de um numero\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf ("%c", &opc);
        printf("\n");

        switch (opc)
        {
            case 'A':
            case 'a':
                for (i=1; i<= 8; i++) 
                {
                    printf("%d != ", i);
                    
                    for (j = i; j >=2; j--)
                    {
                        printf("%d * ", j);
                    }
                    printf("1 = %d\n", Fatorial(i));
                }    

            break;
            
            case 'B':
            case 'b':
                do
                {
                    printf ("Insira um numero: ");
                    fflush(stdin);
                    scanf ("%d", &N1);

                    if (N1<=0)
                    {
                        printf("ERRO: insira um valor maior que 0");
                    }

                } while (N1<=0); 

                printf("\n");

                if (Fatorial(N1) && N1!=0)
                {
                    printf("%d != ", N1);
                        
                    for (j = N1; j >=2; j--)
                    {
                        printf("%d * ", j);
                    }
                    printf("1 = %d", Fatorial(N1));
                      
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