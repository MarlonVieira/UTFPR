#include <stdio.h>

int main (void) {

    char texto[150];
    int i=0, cont=0, j=0;

    printf("Informe um texto: ");
    fflush(stdin);
    gets(texto);

    while (texto[cont]!='\0')
    {
        cont++;
    }

    for (i = 0; i <= cont; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%s ", texto);
        }
        printf("\n");
    }
    for (i = cont-1; i > 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            printf("%s ", texto);
        }
        printf("\n");
    }
    
    return(0);
}