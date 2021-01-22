#include <stdio.h>

int main(void) {
    
    char texto[150];
    int i=0, cont=0;
    char op;

    do
    {
        i=0;
        printf("Informe um texto com ate 150 caracteres: ");
        fflush(stdin);
        gets(texto);

        while(texto[i] != '\0')
        {
            i++;
        }

        i = i-1;

        printf("\n===Texto inverso===\n");
        while(i >= 0)
        {
            printf("%c", texto[i]);
            i--;
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
