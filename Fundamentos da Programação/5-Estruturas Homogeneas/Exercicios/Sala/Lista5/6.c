#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void VetorA (int vetor[], int tamanho);
void gerarVetor(int vetor[], int tamanho, int limite, int inicio);

int main (void) {

    int i=0, j=0, vet[10], cont;
    char op;

    do
    {
        gerarVetor(vet, 10, 50, 5);
        printf("\n===VETOR GERADO===\n");
        VetorA(vet, 10);

        i=0;
        while (vet[i] != '\0')
        {
            for (j = 5; j <= 50; j++)
            {
                if(vet[i] % j == 0)
                {
                    cont++;
                }
            }
            
            if(cont == 2)
            {
                printf("\n%d eh primo", vet[i]);
            }
                else
                {
                    printf("\n%d nao eh primo", vet[i]);
                }
            cont=0;
            i++;
        }

        i=0;
        printf("\n\n===PRIMOS===\n");
        while (vet[i] != '\0')
        {
            for (j = 5; j <= 50; j++)
            {
                if(vet[i] % j == 0)
                {
                    cont++;
                }
            }
            
            if(cont == 2)
            {
                printf("%d\t", vet[i]);
            }
            cont=0;
            i++;
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