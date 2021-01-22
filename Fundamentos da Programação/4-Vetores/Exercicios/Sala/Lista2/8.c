#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void VetorA (int vetor[], int tamanho);
void gerarVetor(int vetor[], int tamanho, int limite);

int main (void) {

    int vet[100], i=0, cont0;
    float M=0;
    char op;

    do
    {
        cont0=0;

        gerarVetor(vet, 100, 1);
        printf("\n===VETOR A===\n");
        VetorA(vet, 100);

        printf("\n\n===VETOR B===\n");
        for (i = 0; i < 100; i++)
        {
            if (vet[i]==0)
            {
               cont0++; 
            }
                else if (vet[i]==1)
                {
                    if (cont0>0)
                    {
                        printf("%d\t", cont0);
                    }
                    cont0=0;
                }
        }
    
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
        printf("%d\t", vetor[i]);
    }
}

void gerarVetor(int vetor[], int tamanho, int limite)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand() % (limite+1);
    }
}
