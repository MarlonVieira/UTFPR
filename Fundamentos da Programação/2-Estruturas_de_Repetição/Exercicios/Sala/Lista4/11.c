#include <stdio.h>

int main (void) {

    int num, i=0;


    printf("\nInforme um numero positivo: ");
    scanf("%d", &num);

     for(i=0; i<=10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return(0);
}
/*
a) Que estrutura de repetição está representada neste fluxograma?
R: For.

b) O que faz o programa implementado com base neste fluxograma?
R: Imprime a tabuada do numero inserido pelo usuário.
*/