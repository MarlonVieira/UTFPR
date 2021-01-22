#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Vetor (int vetor[], int tamanho);

void Vetor (int vetor[], int tamanho)
{
    int i;

    for(i=0; i < tamanho; i++)
    {
        printf("%2d\t", vetor[i]);
    }
}

void mostraVet(int vetor[], int tamanho, int limite, int inicio);

void mostraVet(int vetor[], int tamanho, int limite, int inicio)
{
    int i;

    srand(time(NULL));

    for(i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % limite + inicio;
    }
}

void MostrarDivisores(int num);

void MostrarDivisores(int N1)
{
    int i;

    for(i = 1; i <= N1; i++)
    {
        if(N1 % i == 0)
        {
            printf("%2d ", i);
        }
    }
}

int QtdeDiv(int num);

int QtdeDiv(int N1)
{
    int i, cont=0;

    for(i = 1; i <= N1; i++)
    {
        if(N1 % i == 0)
        {
           cont++;
        }
    }
    return(cont);
}