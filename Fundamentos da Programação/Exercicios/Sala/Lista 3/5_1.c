#include <stdio.h>
#include <stdlib.h>

int main (void) {


    int sld;
    char a;

    printf("Insira o seu saldo:");
        scanf("%d", &sld);

    if (sld >= 0)
    {
        printf("Saldo positivo, conta sem risco");
    }
        else if (sld<=0)
        {
            printf("Voce tem aplicacoes (S/N)? ");
            fflush(stdin);
            scanf("%c", &a);
        
            if(a == 'n' || a == 'N')
                        {
                            printf("\nSaldo negativo, cliente esta com risco\n");
                        }
                            else if(a == 's' || a == 'S')
                            {
                                printf("\nSaldo negativo, mas o cliente nao esta com risco\n");
                            }
            else
            {
                printf("\nERRO: caractere inserido invalido");
            }
            
        }






    return (0);
}