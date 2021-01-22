#include <stdio.h>

int main(void) {
    
    char texto[150];
    int i, cont, cont1;
    char op;

    do
    {
        i=0;
        cont=0;
        cont1=0;

        printf("Informe um texto com ate 150 caracteres: ");
        fflush(stdin);
        gets(texto);

        while(texto[i] != '\0')
        {
            if(texto[i] >= 'a' && texto[i] <= 'z' || texto[i] >= 'A' && texto[i] <= 'Z' || texto[i] >= ' ')
            {
                cont++;
            }
            if(texto[i] >= 'a' && texto[i] <= 'z' || texto[i] >= 'A' && texto[i] <= 'Z')
            {
                cont1++;
            }
            i++;
        }

        printf("Quantidade de caracteres sem espacos: %d\n", cont1);

        printf("Quantidade de caracteres com espacos: %d\n", cont);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
