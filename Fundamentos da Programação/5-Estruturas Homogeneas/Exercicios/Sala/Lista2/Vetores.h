#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void VetorA (int vetor[], int tamanho);

void VetorA (int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%2d\t", vetor[i]);
    }
}

void gerarVetor(int vetor[], int tamanho, int limite, int inicio);

void gerarVetor(int vetor[], int tamanho, int limite, int inicio)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand() % limite + inicio;
    }
}

int SomaVetorInteiro (int vetor[], int tamanho);

int SomaVetorInteiro (int vetor[], int tamanho)
{
    int j, soma=0;

    for (j = 0; j < tamanho; j++)
    {
        soma = soma + vetor[j];
    }

    return(soma);
}
