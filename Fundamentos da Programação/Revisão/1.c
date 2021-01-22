#include <stdio.h>

int Primos (int N);
char SeparaVogais (int lin, char Vogal);

int main (void) {

    int lin=0, i=0, j=0;

    do
    {
        printf("Quantas linhas tem o texto? ");
        fflush(stdin);
        scanf("%d", &lin);

        if (lin<1)
        {
            printf("\nERRO: insira um valor maior que 0.\n");
        }
        
    } while (lin<1);
    
    char vetor[lin][300];
    int cont[lin];

    i=0;
    printf("\nInsira o texto: \n");
    for (i = 0; i < lin; i++)
    {
        fflush(stdin);
        gets(vetor[i]);
    }
    
    for (i = 0; i < lin; i++)
    {
        cont[i]=0;
    }
    
    i=0;
    printf("\n====Vetor de letras por linha====\n");
    for (i = 0; i < lin; i++)
    {
        j=0;
        while (vetor[i][j]!='\0')
        {
            if (vetor[i][j]>='A' && vetor[i][j]<='Z' || vetor[i][j]>='a' && vetor[i][j]<='z')
            {
                cont[i]++;
            }
            j++;
        }
        printf("%d\t", cont[i]);
    }
    
    printf("\n\n====String de char com codigo====\n");
    for (i = 0; i < lin; i++)
    {
        j=0;
        while(vetor[i][j] != '\0')
        {
            if (Primos((int)vetor[i][j])==1)
            {
                printf("%c\t", vetor[i][j]);
            }
            j++; 
        }
    }

    printf("\n\n====Texto vogais separadas====\n");
    for (i = 0; i < lin; i++)
    {
        j=0;
        while (vetor[i][j]!='\0')
        {
            SeparaVogais(lin, vetor[i][j]);
            j++;
        }
        printf("\n");
    }
    
    return(0);
}
int Primos (int N)
{
    int i, cont=0;

    for (i = 1; i <= N; i++)
    {
        if (N%i==0)
        {
            cont++;
        }
    }
    if (cont==2)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

char SeparaVogais (int lin, char Vogal)
{
    int i;

        if (Vogal=='A' || Vogal=='E' || Vogal=='I' || Vogal=='O' || Vogal=='U' || Vogal=='a' || Vogal=='e' || Vogal=='i' || Vogal=='o' || Vogal=='u')
        {
            printf("-%c-", Vogal);
        }
        else
        {
            printf("%c", Vogal);
        }
    return(i);
}