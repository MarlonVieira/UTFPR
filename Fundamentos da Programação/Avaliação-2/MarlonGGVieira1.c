#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Inverte (char texto []);
int Subtexto (char texto[], char subtexto[]);
//int Verifica (char texto[], char subtexto[]);

int main (void) {

    char texto[150], subtexto[75], textob[150], textoc[150], subtextoc[75], textod[150], subtextod[75], textoe[150];
    int i=0, pos=0, j=0, cont=0, des=0;

    printf("Informe uma string: ");
    fflush(stdin);
    gets(texto);

    while (texto[cont] != '\0')
    {
        cont++;
    }

    printf("Tamanho da string: %d", cont);

    printf("\nInforme uma substring: ");
    fflush(stdin);
    gets(subtexto);

    do
    {
        printf("Informe a posicao(menor igual a %d): ", cont);
        fflush(stdin);
        scanf("%d", &pos);

        if (pos > cont)
        {
            printf("\nERRO: insira um valor maior que %d\n", cont);
        }
        
    } while (pos > cont);
    
    i=0;
    pos = pos - 1;
    printf("\n===SUBSTRING NA STRING===\n");
    while (texto[i]!='\0')
    {
        printf("%c", texto[i]);
        if (i==pos)
        {
            printf("%s", subtexto);
        }
        i++;
    }
    
//Função B
    printf("\n\nInforme uma string: ");
    fflush(stdin);
    gets(textob);

    printf("\n===STRING INVERTIDA===\n");
    Inverte(textob);

//Função C
    printf("\n\nInforme uma string: ");
    fflush(stdin);
    gets(textoc);

    printf("Informe uma substring: ");
    fflush(stdin);
    gets(subtextoc);

    printf("\n===OCORRENCIAS DA SUBSTRING===\n");
    printf("Substring: %s\n", subtextoc);
    printf("Ocorrencias: ");
    Subtexto(textoc, subtextoc);
/*
//Função D
    printf("\n\nInforme uma string: ");
    fflush(stdin);
    gets(textod);

    printf("Informe uma substring: ");
    fflush(stdin);
    gets(subtextod);

    printf("\n===SUBSTRING NO FINAL DA STRING===\n");
    if (Verifica(textod, subtextod)==1)
    {
        printf("SIM");
    }
    else
    {
        printf("NAO");
    }
*/
//Função E
    printf("\n\nInforme uma string: ");
    fflush(stdin);
    gets(textoe);

    while (textoe[j]!='\0')
    {
        j++;
    }
    
    printf("\n===CRIPTOGRAFIA===");
    printf("\nInforme o deslocamento: ");
    fflush(stdin);
    scanf("%d", &des);

    for(i = 0; i < j; i++)
    {
        int cripto = (int)textoe[i] + des;
        printf("%c", (char)cripto);
    }

    return(0);
}

char Inverte (char texto [])
{
    int i=0;

    while(texto[i] != '\0')
    {
        i++;
    }

    i = i-1;

    while(i >= 0)
    {
        printf("%c", texto[i]);
        i--;
    }
    return(0);
}

int Subtexto (char texto[], char subtexto[])
{
    char retur = 0;
    int i=0, j, cont=0;

    while(texto[i] != '\0')
    {
        if(texto[i] == subtexto[0])
        {
            j=0;
            while(subtexto[j] != '\0' && texto[i] != '\0')
            {
                if(texto[i] != subtexto[j])
                {
                    break;
                }
                i++;
                j++;
            }
            if(subtexto[j] == '\0')
            {
                retur = 1;
                cont++;
            }
        }
        i++;
    }
    printf("%d", cont);
    return(retur);
}
/*
int Verifica (char texto[], char subtexto[])
{
    char retur = 0;
    int i=0, j;

    while(texto[i] != '\0')
    {
        if (texto[i] != ' ') 
        {
            if(texto[i] == subtexto[0])
            {
                j=0;
                while(subtexto[j] != '\0' && texto[i] != '\0')
                {
                    if(texto[i] != subtexto[j])
                    {
                        break;
                    }
                    i++;
                    j++;
                }
                if(subtexto[j] == '\0')
                {
                    retur = 1;
                }
            }
        }
        i++;
    }

    return(retur);
}
*/