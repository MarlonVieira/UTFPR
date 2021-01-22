#include <stdio.h>

int main (void) {

    int i, s=1;

    for (i = 1; i < 5; i++)
    {
        s=s*i;
    }
    printf("%d", s);

    return (0);
}   
//a) Por que a variável s foi inicializada com 1? 
//Para que o vezes fosse possivel de ser feito, já que com zero multiplicando algum numero sempre sera zero.

//b) Qual o problema observado neste algoritmo?
//O for foi iniciado com o numero zero.

//c) Qual seria a solução correta?
//Para solucionar o problema eu troquei o i=0 para i=1.