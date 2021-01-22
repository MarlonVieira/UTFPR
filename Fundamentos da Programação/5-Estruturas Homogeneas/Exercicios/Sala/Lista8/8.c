#include <stdio.h>
#include <ctype.h>

char string (char texto[]);

int main(void) {
    
    char texto[250];
    int i=0;
    char op;

    do
    {
        i=0;
        printf("Informe uma string: ");
        fflush(stdin);
        gets(texto);

        string(texto);
        printf("\nString minuscula: %s", texto);
        
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}

char string (char texto[])
{
    int i=0;

    while(texto[i] != '\0')
    {
        if(texto[i] >= 'A' && texto[i] <= 'Z')
        {
            texto[i] = tolower(texto[i]);
        }
        i++;
    }
    return(texto);
}