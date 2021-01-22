#include <stdio.h>
#include <stdlib.h>

int Subtexto (char texto[], char subtexto[]);

int main (void) {

    char op, texto[100], subtexto[50];
    int i=0, j=0, cont, vetor[50];

    do
    {
        i=0;
        cont=0;
        j=0;
        printf("Informe um texto: ");
        fflush(stdin);
        gets(texto);

        printf("Informe um subtexto: ");
        fflush(stdin);
        gets(subtexto);

        if (Subtexto(texto, subtexto) == 1)
        {
            printf("\nA substring \"%s\" faz parte da string \"%s\".\n", subtexto, texto);
        }
        else
        {
            printf("\nA substring \"%s\" nao faz parte da string \"%s\".\n", subtexto, texto);
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
int Subtexto (char texto[], char subtexto[])
{
    char retur = 0;
    int i=0, j;

    while(texto[i] != '\0')
    {
        if(texto[i] == subtexto[0])
        {
            j=0;
            while(subtexto[j] != '\0' && texto[i] != '\0')
            {
                if(texto[i] != subtexto[j])
                {
                    break;
                }
                i++;
                j++;
            }
            if(subtexto[j] == '\0')
            {
                retur = 1;
            }
        }
        i++;
    }
    return(retur);
}