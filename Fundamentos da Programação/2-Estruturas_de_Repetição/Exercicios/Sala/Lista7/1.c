#include <stdio.h>

int main (void) {

    int MV=0;
    float N1, mf=0, sec=0, min=0;
    char op;

    do
    {
        do
        {
            printf("\nInforme a massa inicial, em gramas: ");
            fflush(stdin);
            scanf("%f", &N1);

            if (N1<=0)
            {
                printf("\nERRO: Informe um valor maior que 0.\n");
            }
        }while (N1<=0);

            while (N1>=0.5)
            {
                N1=N1/2;
                MV++; 
                
            }

        sec=MV*60;
        min= sec/60;

            

        printf("\nA massa final eh: %.2f", N1);

        printf("\nSerao necessarios %.2f minuto(s) para atingir a massa final", min);

        printf("\n\nDeseja digitar outro numero (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}