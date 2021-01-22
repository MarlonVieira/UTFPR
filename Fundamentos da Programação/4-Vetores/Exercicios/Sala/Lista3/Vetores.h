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

void MostrarVetorFloat(float vetor[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("%.1f\t", vetor[i]);
    }
}

void GerarVetorFloat0a1(float vetor[], int tam)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = (float)(rand()) / RAND_MAX;
    }
}

float SomarVetorFloat(float vetor[], int tam)
{
    int i;
    float soma=0;

    for(i=0; i<tam; i++)
    {
        soma = soma + vetor[i];
    }

    return(soma);
}

void GerarVetorFloat0a100(float vetor[], int tam)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = ((float)(rand()) / RAND_MAX)*100;
    }
}

void mostraVetchar(char vetor[], int tam, int lin)
{
    int i, j=0;

    for(i=0; i<tam; i++)
    {
        printf("%c ", vetor[i]);
        j++;

        if (j%lin==0)
        {
            printf("\n");
        }

    }
}

void GerarVetorCharMinuscula(char vetor[], int tam)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % 26 + 97;
    }
}

void GerarVetorCharMaiuscula(char vetor[], int tam)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % 26 + 65;
    }
}

void GerarVetorCharAlfanumerico(char vetor[], int tam)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % 223 + 33;
    }
}

void GerarVetorPositivoNegativo(int vetor[], int tam, int limNegativo, int limPositivo)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % (limPositivo + limNegativo + 1) - limNegativo;
    }
}
