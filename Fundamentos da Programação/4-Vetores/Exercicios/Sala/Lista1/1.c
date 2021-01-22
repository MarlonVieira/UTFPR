#include <stdio.h>

int main () {

    int N1[10];
    int i=0, contP=0,  contD=0, contMaior=0, contMenor=0,  contI=0, contMedia=0;
    float perc=0;
    char op;

    do
    {
       
        for (i = 0; i < 10; i++)
        {
            printf("Informe um elemento na posicao %d: ", i);
            fflush(stdin);
            scanf("%d", &N1[i]);
        } 
            
        printf("\n===PARES===\n");

        for (i = 0; i < 10; i++)
        {
            if (N1[i]%2==0)
            { 
                contP++;
                printf("%d\t", N1[i]);   
            }
        }

            printf("\nExistem %d pares\n", contP);

        printf("\n===DIVISIVEIS POR 3 E POR 5===\n");
        
        for (i = 0; i < 10; i++)
        {
            if (N1[i]%3==0 && N1[i]%5==0)
            { 
                contD++;
                printf("%d\t", N1[i]);   
            }
        }

            printf("\nExistem %d divisiveis por 3 e 5\n", contD);
        
        printf("\n===MENORES QUE 10 OU MAIORES QUE 100===\n");
        
        for (i = 0; i < 10; i++)
        {
            if (N1[i]<10 || N1[i]>100)
            { 
                contMenor++;
                printf("%d\t", N1[i]);
            }
        }

            printf("\nExistem %d menores que 10 ou maiores que 100\n", contMenor);

        printf("\n===MAIORES QUE 10 e MENORES QUE 100===\n");
        
        for (i = 0; i < 10; i++)
            {
                if (N1[i]>10 && N1[i]<100)
                { 
                    contMaior++;
                    printf("%d\t", N1[i]);
                }
            }

            printf("\nExistem %d maiores que 10 e menores que 100\n", contMaior);

        printf("\n===IMPARES===\n");
        
        for (i = 0; i < 10; i++)
        {
            if (N1[i]%2!=0)
            { 
                contI++;
                printf("%d\t", N1[i]);
            }
        }

        for (i = 0; i < 10; i++)
        {
            if (N1[i]%2!=0 || N1[i]>10 && N1[i]<100 || N1[i]<10 || N1[i]>100 || N1[i]%3==0 && N1[i]%5==0 || N1[i]%2==0)
            {        
                contMedia++;
            }
        }
        

        perc=(float)contI*100/contMedia;

            printf("\nExistem %d impares representado %.2f%% dos elementor do vetor\n", contI, perc);


        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}