#include <stdio.h>
#include <stdlib.h>

int main(void)  {

    int i, cBr=0, cEs=0,BrSCS=0, somaBr=0, primeiro=0, dm=0;
    float M;
    char n, c;

    do
    {
        printf("Informe a idade:");
        scanf("%d", &i);

        if (i >= 0)
        {
            do
            {
                printf("Insira a nacionalidade (B/b/E/e): ");
                fflush(stdin);
                scanf("%c", &n);

                if(n != 'E' && n != 'e' && n != 'B' && n != 'b')
                {
                    printf("ERRO: nacionalidade invalida\n");
                }

            } while (n != 'E' && n != 'e' && n != 'B' && n != 'b');

            do
            {
                printf("Tem curso superior (S/s/N/n)? ");
                fflush(stdin);
                scanf("%c", &c);

                if(c != 'N' && c != 'n' && c != 'S' && c != 's')
                {
                    printf("ERRO: caractere invalido\n");
                }

            } while(c != 'N' && c != 'n' && c != 'S' && c != 's');

            if(n == 'B' || n == 'b')
            {
                cBr++;
                if(c == 'N' || c == 'n')
                {
                    BrSCS++;
                    somaBr = somaBr + i;
                }
            }
            else
            {
                cEs++;
            }
                if (c == 's' || c == 'S')
                {
                    if (primeiro==0)
                    {
                        dm = i;
                        primeiro=1;
                    }
                        else
                        {
                            if (i<dm)
                            {
                                dm = i;
                            } 
                        }  
                }
        }
    } while (i>=0);
    
    printf("\nQuantidade de brasileiros: %d\n", cBr);
    printf("Quantidade de estrangeiros: %d\n", cEs);

    if(BrSCS > 0)
    {
        M = (float)somaBr / BrSCS;
        printf("A media de idade dos brasileiros sem curso superior eh: %.2f\n", M);
    }
        else
        {
            printf("\nTodos os brasileiros tem curso superior\n");
        }
    
    printf("Menor idade de estrangeiro sem curso superior eh: %d\n", dm);

    return (0);
}