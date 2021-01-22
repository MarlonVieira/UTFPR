void GerarVetorSemRepeticao(int vetor[], int tamanho, int limite)
{
    int i, j;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = 1 + rand() % limite;

        for (j = 0; j < i; j++)
        {
            if (vetor[i] == vetor[j])
            {
                i--;
                break;
            }
        }
    }
}

void VetorA (int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%2d\t", vetor[i]);
    }
}