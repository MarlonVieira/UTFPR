#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int verificaString(char str1[], char str2[])
{
    int i=0, result;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != ' ')
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
        }
        i++;
    }
    return(result);
}

int main(void) {

    char texto[250], inverso[250], inverso2[250];
    int i=0, j=0, k=0;
    char op;

    do
    {
        printf("Informe um texto: ");
        fflush(stdin);
        gets(texto);

        i=0;
        while (texto[i] != '\0')
        {
            i++;
        }

        printf("\nTexto invertido: ");
        j=0;
        for (i = i-1; i >= 0; i--)
        {
            if (texto[i] != ' ')
            {
                printf("%c", texto[i]);
                inverso[j] = texto[i];
                j++;
            }
        }
        inverso[j] = '\0';

        k=0;
        for(j=j-1; j >= 0; j--)
        {
            inverso2[k] = inverso[j];
            k++;
        }
        inverso2[k] = '\0';

        if (verificaString(inverso, inverso2)==1)
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

