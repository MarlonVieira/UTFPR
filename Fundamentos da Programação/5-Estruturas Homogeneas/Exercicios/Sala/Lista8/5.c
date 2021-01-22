#include <stdio.h>
#include <stdlib.h>

int main (void) {

    char op, texto[250];
    int i=0, j=0, cont, vetor[50];

    do
    {
        i=0;
        cont=0;
        j=0;
        printf("Informe um texto: ");
        fflush(stdin);
        gets(texto);

        while (texto[i] != '\0')
        {
            if(texto[i] == ' ')
            {
                cont++;

                if (texto[i+1] == '\0')
                {
                    vetor[j] = cont;
                    j++;
                }
            }
            else
            {
                if (cont>0)
                {
                    vetor[j] = cont;
                    j++;
                    cont=0;
                }
            }
            i++;
        }

        printf("\n===ESPACO ENTRE AS PALAVRAS===\n");
        for (i = 0; i < j; i++)
        {
            printf("%d\t", vetor[i]);
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}