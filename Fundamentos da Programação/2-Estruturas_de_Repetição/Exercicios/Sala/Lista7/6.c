#include <stdio.h>

int main (void) {


    int N1, c, i=0;
    char op;

    do
    {
        
        printf("\nInforme quantos numeros pares e divisiveis por 3 quer mostrar: ");
        fflush(stdin);
        scanf("%d", &N1);

        c=0;
        if (N1<0)
        {
            N1=N1*-1;
        }
        
        do
        {
            if (i%3==0 && i%2==0)
            {
                printf("%d\t", i);
                c++;
            }
            i++;
        }while (c<N1);

        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}