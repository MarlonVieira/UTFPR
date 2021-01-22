#include <stdio.h>

int main(void)  {
    int M=0, Mi=0, NL=0;
    char c = '1';

    while(c!='0')
    {
        printf("Informe um caractere: ");
        fflush(stdin);
        scanf("%c", &c);

        if(c!='0')
        {
            if(c >= 65 && c <= 90)
            {
                M++;
            }
                else if (c >= 97 && c <= 122)
                {
                    Mi++;
                }
                    else
                    {
                        NL++;
                    }
        }
    }

    printf("\n%d sao letras maiusculas.\n", M);

    printf("%d sao letras minusculas.\n", Mi);

    printf("%d caracteres nao sao letras.\n", NL);

    return (0);
}