#include <stdio.h>

char Inverte (char texto []);

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

        

        printf("\nString inversa: ");
        Inverte(texto);
        

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}

char Inverte (char texto [])
{
    int i=0;

    while(texto[i] != '\0')
    {
        i++;
    }

    i = i-1;

    while(i >= 0)
    {
        printf("%c", texto[i]);
        i--;
    }
    return(0);
}