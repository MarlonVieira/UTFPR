#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int N1;

    printf ("Insira um numero:");
        scanf("%d", &N1);
    
    if (N1 % 5 ==0 && N1 % 3==0 && N1 % 2==0)
    {
        printf("%d eh divisivel por 2, 3 e 5.", N1);
    }
        else if (N1 % 5 == 0 && N1 % 3 == 0)
        {
            printf("%d eh divisivel por 3 e 5.", N1);
        }
            else if (N1 % 5==0 && N1 % 2==0)
            {
            printf("%.d eh divisivel por 2 e 5.", N1);
            }
                else if (N1%3 ==0 && N1%2 ==0)
                {
                    printf("%d eh divisivel por 2 e 3.", N1);
                }
                    else if (N1 % 3 ==0)
                    {
                    printf("%d eh divisivel somente por 3.", N1);
                    }
                        else if (N1 % 2 ==0)
                        {
                            printf ("%d eh divisivel somente por 2.", N1);
                        }
                            else if (N1 % 5 ==0)
                            {
                                printf ("%d eh divisivel somente por 5.", N1);
                            }
                                else 
                                {
                                    printf("%d nao eh divisivel por 2, 3 e 5.", N1);
                                }

    return (0);
}