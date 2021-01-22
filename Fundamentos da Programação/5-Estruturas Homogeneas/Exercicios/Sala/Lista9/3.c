#include <stdio.h>

int main(void) {

    int i, j, vet, cont;
    float aux;
    char op;

    do
    {
        vet=0;
        printf("\nInforme a quantidade de elementos do vetor: ");
        scanf("%d", &vet);

        float vetor[vet];
        printf("\n");

        for(i=0; i<vet; i++)
        {
            printf("Valor do elemento %d do vetor: ", i);
            scanf("%f", &vetor[i]);
        }

        printf("\n===VETOR===\n");
        for (i = 0; i < vet; i++)
        {
            printf("%.2f\t", vetor[i]);
        }

        for (i = 0; i < vet; i++)
        {
            for (j = i+1; j < vet; j++)
            {
                if (vetor[i] > vetor[j])
                {
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
            }
        }

        printf("\n===VETOR ORDENADO===\n");

        for (i = 0; i < vet; i++)
        {
            printf("%.2f\t", vetor[i]);
        }

        printf("\n");

        for (i = 0; i < vet; i++)
        {
            cont=0;
            for (j = 0; j < vet; j++)
            {
                if (vetor[i]==vetor[j])
                {
                    cont++;
                }
            }
            if (cont<=1)
            {
                printf("\n%.2f ocorre %d vez", vetor[i], cont);
            }
            else
            {
                printf("\n%.2f ocorre %d vezes", vetor[i], cont);
            }
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
