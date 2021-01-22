#include <stdio.h>

int main(void) {

    int i, j, contmaior, contmenor;
    float M[3], matriz[3][2], soma[3];
    char op;

    do
    {
        for(i=0; i<3; i++)
        {
            for(j=0; j<2; j++)
            {
                do
                {
                    printf("Informe a nota %d do aluno %d: ", j+1, i+1);
                    scanf("%f", &matriz[i][j]);
                
                    if(matriz[i][j]<0 || matriz[i][j]>10)
                    {
                        printf("\nERRO: insira um valor maior que 0 e menor que 10.\n");
                    }
                } while (matriz[i][j]<0 || matriz[i][j]>10);
            }
        }

        for (i = 0; i < 3; i++)
        {
            M[i]=0;
            soma[i]=0;
        }
        
        soma[0] = soma[0] + matriz[0][0]; 
        soma[0] = soma[0] + matriz[0][1];

        soma[1] = soma[1] + matriz[1][0]; 
        soma[1] = soma[1] + matriz[1][1];

        soma[2] = soma[2] + matriz[2][0]; 
        soma[2] = soma[2] + matriz[2][1];

        M[0]=(float)soma[0]/2;
        M[1]=(float)soma[1]/2;
        M[2]=(float)soma[2]/2;

        contmaior=0;
        contmenor=0;

        for (i = 0; i < 3; i++)
        {
            if(M[i]>=7)
            {
                contmaior++;
            }
            if(M[i]<7)
            {
                contmenor++;
            }
        }
        

        printf("\n===MEDIA===\n");
        printf("ALUNO\tMEDIA\n");

        printf("1\t%.2f\n2\t%.2f\n3\t%.2f\n", M[0], M[1], M[2]);

        printf("\nNumero de alunos com a media maior ou igual a sete: %d\n", contmaior);
        printf("\nNumero de alunos com a media menor que sete: %d", contmenor);

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}
