#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Vetor(int vetor[], int tamanho, int limite);
void mostraVet(int vetor[], int tamanho);

int main (void) {

    int vet[100], i, maior;
    float div=0;
    char op;

    do
    {
        Vetor(vet, 100, 10);
        printf("\n===VETOR A===\n");
        mostraVet(vet, 100);

        maior = vet[0];
        for(i=0; i<100; i++)
        {
            if(vet[i] > maior)
            {
                maior = vet[i];
            }
        }

        printf("\n\nMaior valor: %d\n", maior);

        printf("\n===VETOR B===\n");
        for (i = 0; i < 100; i++)
        {
            div=0;
            div=(float)vet[i]/10;
            if (div>=0 && div<=1)
            {
                printf("%.1f\t", div);
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