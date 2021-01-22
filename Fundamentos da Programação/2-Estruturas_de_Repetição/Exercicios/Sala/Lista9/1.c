#include <stdio.h>

int main (void) {

    int N1, i=0, soma=0, maior, menor, cont=0, j=0, primeiro, contNEG=0;
    char op;
    float M;

    do
    {
        primeiro=0;
        cont=0;
        soma=0;
        do
        {
            printf("Informe um valor: ");
            fflush(stdin);
            scanf("%d", &N1);

            if (N1!=0)
            {
                if (N1<0)
                {
                    soma=soma+N1;
                    cont++;
                }
                
                if (primeiro==0)
                {
                    maior=N1;
                    menor=N1;
                    primeiro=1;
                }
                else
                {
                    if (N1>maior)
                    {
                        maior=N1;
                    }
                    else if (N1<menor)
                    {
                        menor=N1;
                    }
                    
                }

                if (N1<0 && N1!=0)
                {
                    contNEG=contNEG+N1;
                    j++;
                }
            }
        } while (N1!=0);
    


        printf("\nMaior valor da sequencia: %d", maior);

        printf("\nMenor valor da sequencia: %d", menor);


        M=(float)contNEG/j;

        printf("\nA media dos negativos eh: %.2f", M);
    

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);
    }while(op == 'S' || op == 's');

    return (0);
}