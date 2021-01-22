#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Vetor(int vetor[], int tamanho, int limite);
void mostraVet(int vetor[], int tamanho);

int main (void) {

    int vet[300], vetb[300], i, cont, div;
    char op;

    do
    {
        Vetor(vet, 300, 100);
        printf("\n===VETOR A===\n");
        mostraVet(vet, 300);

        printf("\n===VETOR B===\n"); 
        for (i = 0; i < 300; i++)
        {
            if (vet[i]>9)
            {
                vetb[i] = vet[i] /10;
                printf("%2d\t", vetb[i]);
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
        printf("%3d\t", vetor[i]);
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