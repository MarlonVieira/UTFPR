#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    
    char texto[100];
    int i;
    char op;

    do
    {
        i=0;
        printf("\nInforme um texto: ");
        fflush(stdin);
        gets(texto);

            printf("\nTexto sem espacos: ");
            while(texto[i] != '\0')
            {
                if (texto[i] != ' ')
                {
                    printf("%c", texto[i]);
                }
                i++;
            }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
