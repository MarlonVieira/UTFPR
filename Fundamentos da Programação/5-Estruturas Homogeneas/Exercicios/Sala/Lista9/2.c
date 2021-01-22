#include <stdio.h>
#include <stdlib.h>

void primeiraLetra(char texto[]);
void ultimaLetra(char texto[]);

int main(void) {

    char texto[100];
    int i=0, cont;
    char op;

    do
    {
        i=0;
        cont=0;
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

        primeiraLetra(texto);
        printf("\n");
        ultimaLetra(texto);

        i=0;
        printf("\nA primeira palavra: ");
        while (texto[i] != '\0')
        {
            printf("%c", texto[i]);
            if(texto[i] == ' ')
            {
                break;
            }
            i++;
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
void primeiraLetra(char texto[])
{
    int i=0;

    if (texto[0] != ' ')
    {
        printf("%c ", texto[0]);
    }
    while (texto[i] != '\0')
    {
        if (texto[i] == ' ' && (texto[i+1] != ' ' && texto[i+1] != '\0')) 
        {
            printf("%c ", texto[i+1]);
        }
        i++;
    }
}

void ultimaLetra(char texto[])
{
    int i=0;

    while (texto[i] != '\0')
    {
        if (texto[i] != ' ' && (texto[i+1] == ' ' || texto[i+1] == '\0')) 
        {
            printf("%c ", texto[i]);
        }
        i++;
    }
}