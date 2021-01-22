#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void VetorA (int vetor[], int tamanho);
void gerarVetor(int vetor[], int tamanho, int limite, int inicio);
int maisOcorre(int vet[], int tamanho);

int main (void) {

    int vet[10];
    char op;

    do
    {
        gerarVetor(vet, 10, 5, 1);
        printf("\n===VETOR GERADO===\n");
        VetorA(vet, 10);

        printf("\nMaior frequencia do vetor: %d", maisOcorre(vet, 10));
        
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}

void VetorA (int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%2d\t", vetor[i]);
    }
}

void gerarVetor(int vetor[], int tamanho, int limite, int inicio)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand() % limite + inicio;
    }
}

int maisOcorre(int vet[], int tamanho)
{
    int maior, i, j, cont, contmaior=0;

    maior = vet[0];

    for (i = 0; i < tamanho; i++)
    {
        cont=0;

        for (j = i; j < tamanho; j++)
        {
            if (vet[i] == vet[j])
            {
                cont++;
            }
            
        }
        if (cont>contmaior)
        {
            contmaior = cont;
            maior = vet[i];
        }
    }
    return(maior);
}