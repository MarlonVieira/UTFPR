#include <stdio.h>

int main(void) {
    
    char senha[7]="123456", senhainserida[7];
    int i=0, cont=0;
    char op;

    do
    {
        i=0;
        cont=0;
        do
        {
            printf("\nInforme a senha: ");
            fflush(stdin);
            gets(senhainserida);

            while (senhainserida[i] != '\0')
            {
                if (senha[i] != senhainserida[i])
                {
                    break;
                }
                i++;
            }
                if (i==6)
                {
                    printf("\nSenha valida!");
                    break;
                }
                cont++;
            
        } while (cont<3);

        if (cont==3)
        {
            printf("\nSenha invalida!");
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}