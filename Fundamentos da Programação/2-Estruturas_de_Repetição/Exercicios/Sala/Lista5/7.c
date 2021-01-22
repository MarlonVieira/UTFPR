#include <stdio.h>

int main (void) {

    int N1=1, C;

        

    while (N1>0)
    {
        printf("\nInforme um numero: ");
        fflush(stdin);
        scanf("%d", &N1);

        if (N1>0)
        {
            C=0;

            while (N1!=0)
            {
                C= C+(N1 % 10);
                N1=N1/10;
            }
            printf("A soma dos digitos eh: %d\n", C);
        }
    }
    

    return(0);
}