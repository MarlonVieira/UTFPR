#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    
    char texto[150];
    char op;

    do
    {
        int i=0, cont=0;

        printf("Informe um texto: ");
        fflush(stdin);
        gets(texto);

        while(texto[i] != '\0')
        {
            if(texto[i] == ' ')
            {
                i++;
            }
            else if(texto[i] != ' ' && texto[i+1] == ' ' || texto[i] != ' ' && texto[i+1] == '\0')
            {
                cont++;
                i++;
            }
            else if(texto[i] != ' ' && texto[i+1] != ' ')
            {
                i++;
            }
        }

        printf("'%s' tem %d palavras\n", texto, cont);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
