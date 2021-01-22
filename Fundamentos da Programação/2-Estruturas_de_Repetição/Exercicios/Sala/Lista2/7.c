#include <stdio.h>

int main (void) {

    int i, s=0;

    for (i = 0; i < 10; i++)
    {
        s=s+i;
    }
    printf("%d", s);

    return (0);
}   
//O que faz o algoritmo a seguir?
//O programa faz a soma os numeros de 0 a 9.

//Por que a variável s foi inicializada com 0?
//Para que o 's' não coletasse um lixo de memória.