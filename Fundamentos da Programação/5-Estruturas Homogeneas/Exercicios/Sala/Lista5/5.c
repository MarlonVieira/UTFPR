#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void VetorA (int vetor[], int tamanho);
void gerarVetor(int vetor[], int tamanho, int limite, int inicio);
int Perfeito (int num);

int main (void) {

    int i=0, j=0, vet[10], aux;
    char op;

    do
    {
        gerarVetor(vet, 10, 100, 1);
        printf("\n===VETOR GERADO===\n");
        VetorA(vet, 10);

        printf("\n===VETOR DE PARES===\n");
        for(i=0; i < 10; i++)
        {
            if(vet[i]%2==0)
            {
                if (Perfeito(vet[i])==1)
                {
                    printf("\n%d eh perfeito", vet[i]);
                }    
                    else
                    {
                        printf("\n%d nao eh perfeito", vet[i]);
                    }
            }

        }

        printf("\n\n===VETOR DE IMPARES===\n");
        for(j=0; j < 10; j++)
        {
            if(vet[j]%2!=0)
            {
                printf("%d - Soma dos digitos: %d\n", vet[j], soma(vet[j]));
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

int Perfeito (int num)
{
    int i, soma=0, resp=0;

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            soma = soma + i;
        }
    }
    if (num == soma)
    {
        resp = 1;
    }
    return(resp);
}

int soma(int num)
{
    int i, somadig=0;

    while (num !=0)
    {
        somadig = somadig + num % 10;
        num = num /10;
    }
    return(somadig);
}