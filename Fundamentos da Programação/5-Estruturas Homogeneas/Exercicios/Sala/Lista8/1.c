#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
    char op, vet[100];
    int cont, i;

    do
    {
        printf("\nInforme um texto: ");
        fflush(stdin);
        gets(vet);

        cont=0;
        i=0;

        while (vet[i] != '\0')
        {
            if (vet[i]>='A' && vet[i]<='Z')
            {
                cont++;
            }
            i++;
        }

        printf("\nExistem %d caracteres afabeticos maiusculos", cont);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }
    while(op == 'S' || op == 's');

    return(0);
}
