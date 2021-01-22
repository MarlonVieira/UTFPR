#include <stdio.h>

int main (void) {

    int Q, i, c=0, j=0, B=0, A=0;
    char op;

    do
    {
        do
        {
            printf("Informe o numero de jogos: ");
            fflush(stdin);
            scanf("%d", &Q);

            if (Q<=0)
            {
                printf("\nERRO: Insira um numero maior ou igual a 0.\n");
            }
            
        } while (Q<=0);

        i=1;
        A=0;
        B=0;

        do
        {
            printf("Informe o resultado do jogo %d: ", i);
            fflush(stdin);
            scanf("%d", &j);
            
            if (j==1 || j==0)
            {
                i++;
            }

            if (j==1)
            {
                B++;
            }

            if (j==0)
            {
                A++;
            }
             
            if (j<0 || j>1)
            {
                printf("\nERRO: Resultado invalido!\n");
            }
   
        } while (i<=Q || j<0 || j>1);
        
        printf("\nAlice ganhou %d jogo(s) e Beto ganhou %d jogo(s)\n", A, B);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's'); 

    return (0);
}