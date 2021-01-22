#include <stdio.h>

int main(void) {
    
    char texto[100];
    int i=0, cont=0;
    char op;

    do
    {
        printf("Informe um texto com ate 100 caracteres: ");
        fflush(stdin);
        gets(texto);

        if (texto[0] == 'A' || texto[0] == 'a')
        {
            printf("\n%s", texto);
        }

        else
        {
            while(texto[i] != '\0')
            {
                if (texto[i] == 'o')
                {
                    cont++;
                }
                i++;
            }
            printf("%s tem %d caracteres 'o'\n", texto, cont);
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
