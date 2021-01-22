#include <stdio.h>

int verificaString(char str1[], char str2[])
{
    int i=0, result;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] == str2[i])
        {
            result=1;
        }
        else if (str1[i] != str2[i])
        {
            result=0;
            break;
        }

        i++;
    }
    return(result);
}

int main(void) {

    char texto[150], inverso[150];
    int i=0, j=0;
    char op;

    do
    {
        i=0;
        printf("Informe um texto: ");
        fflush(stdin);
        gets(texto);

        while (texto[i] != '\0')
        {
            i++;
        }

        printf("\nTexto invertido: ");
        j=0;
        for (i = i-1; i >= 0; i--)
        {
            printf("%c", texto[i]);
            inverso[j] = texto[i];
            j++;
        }
        inverso[j] = '\0';
        
        if (verificaString(texto, inverso)==1)
        {
            printf("\nEh palindromo\n");
        }
        else
        {
            printf("\nNao eh palindromo");
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
