#include <stdio.h>

int main (void) {

    int Ci=0;
    char N;

    do
    {
        printf("\nInforme um caractere: ");
        fflush(stdin);
        scanf("%c", &N);

        if (N == 'A')
        {
            Ci++;
        }

    }while(N!='0');

    printf("O caractere 'A' foi informado %d vezes", Ci);


    return (0);
}
