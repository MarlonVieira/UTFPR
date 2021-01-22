#include <stdio.h>

int main (void) {

    int num=-1;

    do
    {
        num = num + 1;

        printf("\t%d", num);
    
    }while (num <= 99);

    return(0);
}
/*
a) Que estrutura de repetição está representada neste fluxograma?
R: do{}while

b)O que faz o programa implementado com base neste fluxograma?
R: imprime os numeros de 0 a 100

c) Para que o programa forneça os mesmos números gerados pelo programa implementado no Exercício 8,
quais modificações são necessárias, considerando manter a estrutura de repetição apresentada neste
fluxograma? Implemente essas modificações.
R: Foi necessário mudar o 'int num=0;' para 'int num=-1;' e o 'while (num <= 100)' para 'while (num <= 99);'

*/