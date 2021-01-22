#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void mostraVet(int vetor[], int tamanho);

void mostraVet(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%d\t", vetor[i]);
    }
}

void Vetor(int vetor[], int tamanho, int limite);

void Vetor(int vetor[], int tamanho, int limite)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand() % (limite+1);
    }
}