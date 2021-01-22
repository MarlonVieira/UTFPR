#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int n, n2, i=0, o=0, maior=0, menor, soma=0;

    do
    {
        printf("Insira um valor de n: ");
        scanf("%d", &n);

        if (n<=0)
        {
            printf("\nO valor deve ser maior que 0.\n");
        }
        
    } while (n<=0);

    do
    {
        o=o+1;
        printf("Informe o valor %d: ", o);
        scanf("%d", &n2);

        soma=soma+n2;
        if (n2>maior)
        {
            maior=n2;
        }
        if (n2<menor)
        {
            menor=n2;
        }
        i++;   
    } while (i<n);

    printf("\nMaior valor da sequencia: %d", maior);

    printf("\nMenor valor da sequencia: %d", menor);

    return(0);
}