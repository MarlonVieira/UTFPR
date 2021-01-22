#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
    char op, vet[100];
    int contdig,i;

    do
    {
        printf("\nInforme um texto: ");
        fflush(stdin);
        gets(vet);

        contdig=0;
        i=0;

        while (vet[i] != '\0')
        {
            if (vet[i]>='0' && vet[i]<='9')
            {
                contdig++;
            }
            i++;
        }

        if(contdig>0)
        {
            printf("\nExistem caracteres numericos.", contdig);
        }
        
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }
    while(op == 'S' || op == 's');

    return(0);
}
