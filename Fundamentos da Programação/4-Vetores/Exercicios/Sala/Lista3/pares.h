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

void MostrarPares(int num);

void MostrarPares(int N1)
{
    int i;

    for(i = 1; i <= N1; i++)
    {
        if(i % 2 == 0)
        {
            printf("%2d ", i);
        }
    }
}

int SomaPares(int num);

int SomaPares(int N1)
{
    int i, cont=0;

    for(i = 1; i <= N1; i++)
    {
        if(i % 2 == 0)
        {
           cont = cont + i;
        }
    }
    return(cont);
}