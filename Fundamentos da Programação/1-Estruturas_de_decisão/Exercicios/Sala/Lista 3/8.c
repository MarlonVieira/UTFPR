#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int mgc,x;

    printf("Insira um numero para adivinhar o numero magico:");
        scanf("%d", &mgc);

    x = rand() % 10+0;

    if (mgc==x)
    {
        printf("Correto! %d é o número mágico", x);
    }
        else if (mgc>x)
        {
            printf("Errado, muito alto numero magico eh:%d", x);
        }
            else
            {
                printf("Errado, muito baixo o numero magico eh:%d ", x);
            }
            
        
    








    return (0);
}