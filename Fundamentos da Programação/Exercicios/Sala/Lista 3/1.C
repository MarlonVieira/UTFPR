#include <stdio.h>

int main (void) {

    int n1, n2, resto;

        printf("\nInforme o primeiro valor: ");
            scanf("%d", &n1);

        printf("\nInforme o segundo valor: ");
            scanf("%d", &n2);

        if (n1 == 0 || n2 == 0)
        {
            printf("\nERRO nao eh possivel dividir por zero.");                    
        }
            if (n1 > n2)
                {
                    (resto = n1 % n2);
                } 
                    else if (n2 > n1)
                    {
                        (resto = n2 % n1);
                    } 
                        printf("\nO resto da divisao eh: %d", resto);

    return (0);

}