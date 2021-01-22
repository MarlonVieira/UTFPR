#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostraVet(int vetor[], int tamanho);
void Vetor(int vetor[], int tamanho, int limite);

int main (void) {

    int i, vet[50];
    char op;

    do
    {
        Vetor(vet, 50, 100);
        printf("\n===VETOR===\n");
        mostraVet(vet, 50);
        
        printf("\n\n===PARES===\n");
        for(i=0; i<50; i++)
        {
            if (vet[i] % 2 == 0)
            {
               printf("%d\t", vet[i]);
            }
        }

        printf("\n\n===IMPARES===\n");
        for(i=0; i<50; i++)
        {
           if (vet[i] % 2 == 1)
           {
               printf("%d\t", vet[i]);
           }
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}

void mostraVet(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%d\t", vetor[i]);
    }
}

void Vetor(int vetor[], int tamanho, int limite)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand() % (limite+1);
    }
}