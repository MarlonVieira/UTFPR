#include <stdio.h>

int main(void) {

    char texto[150];
    int i=0;
    char op;

    do
    {
        i=0;
        printf("Informe um texto: ");
        fflush(stdin);
        gets(texto);

        printf("\nA primeira palavra eh: ");
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
