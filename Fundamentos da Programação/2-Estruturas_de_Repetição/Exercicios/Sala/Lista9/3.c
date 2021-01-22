#include <stdio.h>

int main (void) {

    int i=0, j=0, soma=0, LI, LS;
    char op;

    do
    {
        do
        {
            printf("Insira um valor para o limite inferior: ");
            fflush(stdin);
            scanf("%d", &LI);

            if (LI<0)
            {
                printf("\nERRO: Insira um numero maior ou igual que 0.\n");
            }
        
        } while (LI<0);
        
        do
        {
            printf("Insira um valor para o limite superior: ");
            fflush(stdin);
            scanf("%d", &LS);

            if (LS<0)
            {
                printf("\nERRO: Insira um numero maior que o limite inferior.\n");
            }
        
        } while (LS<=LI);
        
        soma=0;

        for (i=LI; i<=LS; i++)
        {
            printf("%d = ", i);

            for (j=2; j<=i; j++)
            {
                if(j%2==0 && j%3==0)
                {
                    printf("%d ", j);
                    soma++;
                }
            }
            if(soma==0)
            {
                printf("NENHUM");
            }
            printf("\n");
        }
        
    printf("\n\nDeseja continuar o programa (S ou N): ");
    fflush(stdin);
    scanf("%c", &op);
    }while(op == 'S' || op == 's');

    return(0);
}