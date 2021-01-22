#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void VetorA (int vetor[], int tamanho);
void gerarVetor(int vetor[], int tamanho, int limite, int inicio);
int OrdenaVet (int vet[], int tamanho);

int main(void)
{
    int vet[15], i, j, repete[15];
    char op;

    do
    {
        gerarVetor(vet, 15, 20, 1);
        printf("\n===VETOR===\n");
        OrdenaVet(vet, 15);
        VetorA(vet, 15);

        j=0;

        for (i = 0; i < 15; i++)
        {
            if (ExisteNoVetor(vet, 15, vet[i]) > 1)
            {
                if (j==0)
                {
                    repete[j] = vet[i];
                    j++;
                }
                else
                {
                    if (repete[j-1] != vet[i])
                    {
                        repete[j] = vet[i];
                        j++;
                    }
                }
            }
        }
        
        printf("\n=== REPETIDOS ===\n");
        VetorA(repete, j);     
        
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
int ExisteNoVetor(int vet[], int tamanho, int valor)
{
    int i, cont=0;

    for (i = 0; i < tamanho; i++)
    {
        if (valor == vet[i])
        {
            cont++;
        }  
    }
    return(cont);
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

int OrdenaVet (int vet[], int tamanho)
{
    int i, j, aux;

    for (i = 0; i < tamanho; i++)
        {
            for (j = i+1; j < tamanho; j++)
            {
                if (vet[i] > vet[j])
                {
                    aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                }
            }
        }
}