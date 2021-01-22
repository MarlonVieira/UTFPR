#include <stdio.h>

int main(void) {

    char texto[150], string2[150];
    int i=0;
    char op;

    do
    {
        i=0;
        printf("Informe um texto: ");
        fflush(stdin);
        gets(texto);

        printf("\n");

        while (texto[i] != '\0')
        {
            if(texto[i] == ' ')
            {
                break;
            }
            string2[i] = texto[i];
            i++;
        }

        printf("A string copiada eh: %s", string2);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
