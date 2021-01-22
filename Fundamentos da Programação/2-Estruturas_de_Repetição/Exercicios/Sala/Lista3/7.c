#include <stdio.h>

int main (void) {

    int i, P=0, CI=0, D=0;

    for(i=1;  i<=10; i++)
    {   
        printf("\nInsira o valor inicial: ");
        fflush(stdin);
        scanf("%d", &i);

        if(i%2 == 0)    
        {
            P++;
        }

        if(i%2 != 0)
        {
            CI++;
        }

        if (i%7==0)
        {
            D++;
        }
    }

    printf("\nSao %d pare(s)", P);

    printf("\nSao %d impare(s)", CI);

    printf("\nSao %d divisvei(s) por 7", D);

    return(0);
}