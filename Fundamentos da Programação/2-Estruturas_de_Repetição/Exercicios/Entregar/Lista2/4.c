#include <stdio.h>

int main (void)
{

    int i, soma=0, md=0;
    float M;

    printf("\nImpares e divisiveis por 7:\n");

    for (i = 500; i >=0; i--)
    {
        if (i%2==1 && i%7==0)
        {
            printf("\t%d \n", i);
        }
        
        if (i%2==0 && i%3==0 && i != 0)
        {
            soma = i + soma;
            md++;
        }
        
    }

        M= (float) soma / md;
        printf("\n\t\tA media dos pares e divisiveis por 3 eh: %.2f", M);    
    

    return (0);
}
