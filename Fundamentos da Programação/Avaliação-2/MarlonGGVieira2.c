#include <stdio.h>

int Primos (int N);

int main (void) {

    char texto[150];
    int i=0, cont=0, j=0, vetor[75];

    printf("Informe um texto: ");
    fflush(stdin);
    gets(texto);

    printf("\n===STRING===\n");
    printf("%s", texto);

    while (texto[i] != '\0')
    {
        if(texto[i] == ' ')
        {
            cont++;

            if (texto[i+1] == '\0')
            {
                vetor[j] = cont;
                j++;
            }
        }
        else
        {
            if (cont>0)
            {
                vetor[j] = cont;
                j++;
                cont=0;
            }
        }
        i++;
    }

    printf("\n===VETOR===\n");
    for (i = 0; i < j; i++)
    {
        printf("%d\t", vetor[i]);
    }

    printf("\n===PRIMOS===\n");
    for (i = 0; i < j; i++)
    {
        if (Primos(vetor[i]))
        {
            printf("%d\t", vetor[i]);
        }
    }
    
    return(0);
}
    
int Primos (int N)
{
    int i, cont=0;

    for (i = 1; i <= N; i++)
    {
        if (N%i==0)
        {
            cont++;
        }
    }
    if (cont==2)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
