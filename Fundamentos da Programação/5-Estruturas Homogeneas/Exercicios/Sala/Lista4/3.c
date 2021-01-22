#include <stdio.h>

int main(void) {

    char texto[150];
    int i=0, vetvogais[5];
    char op;

    do
    {
        for (i = 0; i < 5; i++)
        {
            vetvogais[i]=0;
        }
        
        printf("Informe um texto com ate 150 caracteres: ");
        fflush(stdin);
        gets(texto);

        i=0;

        while (texto[i] != '\0')
        {
            if (texto[i] == 'A' || texto[i] == 'a')
            {
                vetvogais[0]++;
            }
            else if (texto[i] == 'E' || texto[i] == 'e')
            {
                vetvogais[1]++;
            }
            else if (texto[i] == 'I' || texto[i] == 'i')
            {
                vetvogais[2]++;
            }
            else if (texto[i] == 'O' || texto[i] == 'o')
            {
                vetvogais[3]++;
            }
            else if (texto[i] == 'U' || texto[i] == 'u')
            {
                vetvogais[4]++;
            }
            i++;
        }

        printf("\nVOGAL\tQUANTIDADE\n===================\n");
        printf("A/a\t  %d\nE/e\t  %d\nI/i\t  %d\nO/o\t  %d\nU/u\t  %d", vetvogais[0], vetvogais[1], vetvogais[2], vetvogais[3], vetvogais[4]);        

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
