#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int data, a, m, d;

    printf("Insira uma data assim DDMMAAAA:");
        scanf("%d", &data);

        d = (data / 1000000);
            printf("O dia eh: %d\n", d);

        m = ((data % 1000000) / 10000);
            printf("O mes eh: %d\n", m);

        a = (data % 10000);
            printf("O ano eh: %d\n", a);

        if(a < 1)
            {
                printf("\nData invalida\n");
            }
            else if((m < 1) || (m > 12) || (d < 1) || (d > 31))
            {
                printf("\nData invalida\n");
            }
                else if((m == 4 || m == 6 || m == 9 || m == 11) && (d > 30))
                {
                    printf("\nData invalida\n");
                }
                    else if(m == 2)
                    {
                        if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))
                        {
                            if (d > 29)
                            {
                                printf("\nData invalida\n");
                            }
                                else
                                {
                                printf("\nData valida\n");
                                }
                        }
                            else
                            {
                                if(d > 28)
                                {
                                    printf("\nData invalida\n");
                                }
                                    else
                                    {
                                        printf("\nData valida\n");
                                    }
                            }   
                    }
                        else
                        {
                            printf("\nData valida\n");
                        }

    return (0);
}