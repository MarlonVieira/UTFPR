#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
    char op, vet[100];
    int contalf, contdig, i;

    do
    {
        printf("\nInforme um texto: ");
        fflush(stdin);
        gets(vet);

        contalf=0;
        contdig=0;
        i=0;

        while (vet[i] != '\0')
        {
            if (vet[i]>='A' && vet[i]<='Z' || vet[i]>='a' && vet[i]<='z')
            {
                contalf++;
            }
            if (vet[i]>='0' && vet[i]<='9')
            {
                contdig++;
            }
            i++;
        }

        printf("\nExistem %d caracteres afabeticos na frase\n", contalf);
        printf("\nExistem %d digitos na frase", contdig);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }
    while(op == 'S' || op == 's');

    return(0);
}
