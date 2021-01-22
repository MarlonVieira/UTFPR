#include <stdio.h>

int main (void) {

    int num, n1=0, n2=0, n3=0;

    do
    {
        printf("\nInforme um numero positivo: ");
        fflush(stdin);
        scanf("%d", &num);
        
        n3 = num + n2;
        n1 = n2;
        n2 = n3;
        

    }while (num > 0);

    printf("\nO total de numeros positivos eh: %d", n3);

    return(0);
}
/*
a) Que estrutura de repetição está representada neste fluxograma?
R: do{}while

b) O que faz o programa implementado com base neste fluxograma?
R: imprime a soma total de numeros positivos introduzidos pelo usuário

c) Qual o problema verificado no funcionamento do programa?
R: Não havia variáveis suficientes

d) Quais modificações são necessárias para que o programa funcione adequadamente?
R: foi necessario criar mais três variaveis para fazer a soma dos numeros positivos
*/