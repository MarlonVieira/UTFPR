#include <stdio.h>

int main(void)  {

    int M=0, Mi=0, NL=0;
    char c = '1', op;

    do
    {

        while(c!='0')
        {
            printf("Informe um caractere: ");
            fflush(stdin);
            scanf("%c", &c);

            if(c!='0')
            {
                if(c >= 65 && c <= 90 || c >= 97 && c <= 122)
                {
                    M++;
                }
                    else
                    {
                        NL++;
                    }
            }
        }
        if (c%2==0)
        {
            printf("%c corresponde a %c", c, c);
        }
        

        printf("\n\nDeseja repetir (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return (0);
}