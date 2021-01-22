#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int n1, i=0, o;

    int LI, LS, j=0, cont=0, k=0;

    int n3, soma=0, l=0;

    int n4;

    int z=0, m=0, conta=0;

    printf("===QUESTAO A===");

    do
    {
        printf("\nInsira um valor: ");
        fflush(stdin);
        scanf("%d", &n1);

        o=1;
        for (i = 1; i < n1; i++)
        {
            if (n1%i==0)
            {
                o++;            
            }
                  
        }
        if (n1>0)
        {
            printf("\n%d possui %d divisores", n1, o);
        }
        
    } while (n1>0);
    
    printf("\n===QUESTAO B===\n");
    do
    {
        printf("\nInforme o limite inferior do intervalo: ");
        fflush(stdin);
        scanf("%d", &LI);

        if (LI<=0)
        {
            printf("\nERRO: informe um valor maior que 0.\n");
        }
        
    } while (LI<=0);
    
    do
    {
        printf("\nInforme o limite inferior do intervalo: ");
        fflush(stdin);
        scanf("%d", &LS);

        if (LS<=0)
        {
            printf("\nERRO: informe um valor maior que 0.\n");
        }

        if (LS<=LI)
        {
            printf("\nERRO: O limite superior deve ser maior que o inferior.\n");
        }
        
    } while (LS<=0 || LS<=LI);

    for (j = LI; j <= LS; j++)
    {
        cont=0;

        for (k = 1; k <= j; k++)
        {
            if (j%k==0)
            {
                cont++;
            }
        }
        if (cont==2)
        {
            printf("%d\t", j);
        }
            
    }

    printf("\n===QUESTAO C===\n");

    do
    {
        printf("\nInsira um valor: ");
        fflush(stdin);
        scanf("%d", &n3);

        if (n3<=0)
        {
            printf("\nERRO: informe um numero maior que 0.\n");
        }
    } while (n3<=0);
    
    for (l = 1; l < n3; l++)
    {
        if (n3%l==0)
        { 
            soma +=l;
        }
    }        
        if (soma==n3)
        {
            printf("\nA soma dos divisores eh %d, portanto %d eh prefeito.\n", soma, n3);
        }
        else
        {
            printf("\n%d nao eh prefeito.\n", n3);
        }
/*
    printf("\n===QUESTAO D===\n");

    do
    {
        printf("\nInsira um valor: ");
        fflush(stdin);
        scanf("%d", &n4);

        if (n4<=0)
        {
            printf("\nERRO: informe um numero maior que 0.\n");
        }
    } while (n4<=0);
    
    do
    { 
    for (l = 1; l < ; l++)
    {
        if (n3%l==0)
        { 
            soma +=l;
        }
    }        
        if (soma==n3)
        {
            printf("\nA soma dos divisores eh %d, portanto %d eh prefeito.\n", soma, n3);
        }
        else
        {
            printf("\n%d nao eh prefeito.\n", n3);
        }
        
        
    } while ();

*/

/*

    printf("\n===QUESTAO E===\n");
    z=100;
    for (m = 10; m < z; m++)
    {
        
    }
*/
/*
    printf("\n===QUESTAO F===\n");
    
    do
    {
        printf("Informe o limite inferior do intervalo:");
        fflush(stdin);
        scanf("%d", &n6);

        if ()
        {

        }
        
    } while (n6<=0);
*/

    return (0);
}