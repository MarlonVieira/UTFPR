#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int ConverteChar(char letra);
int Contchar (char texto[]);
int Primo (int num);

int main(void) {

    int i, soma, tamanho;
    char texto[250], op;

    do
    {
        printf("Insira um texto: ");
        fflush(stdin);
        gets(texto);

        i=0;
        soma=0;
        tamanho= Contchar(texto);

        while(i < tamanho)
        {
            if(texto[i] != ' ')
            {
                printf("%c", texto[i]);
                soma = soma + ConverteChar(texto[i]);

                if(i == tamanho-1)
                {
                    if(Primo(soma) == 0 && soma != 1)
                    {
                        printf(" = %d -> Primo\n", soma);
                    }
                    else
                    {
                        printf(" = %d -> Nao primo\n", soma);
                    }
                }
            }
            else
            {
                if(Primo(soma) == 0 && soma != 1)
                {
                    printf(" = %d -> Primo\n", soma);
                }
                else
                {
                    printf(" = %d -> Nao primo\n", soma);
                }
                soma = 0;
            }
            i++;
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
int ConverteChar(char letra)
{
    int valor;

    if(letra >= 'a' && letra <= 'z')
    {
        valor = (int) letra - 96;
    }
    if(letra >= 'A' && letra <= 'Z')
    {
        valor = (int) letra - 38;
    }
    return(valor);
}

int Contchar (char texto[])
{
    int i=0;

    while(texto[i] != '\0')
    {
        i++;
    }
    return(i);
}

int Primo (int num)
{
    int i=0, contaDiv=0;

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            contaDiv++;
            break;
        }
    }
    return (contaDiv);
}