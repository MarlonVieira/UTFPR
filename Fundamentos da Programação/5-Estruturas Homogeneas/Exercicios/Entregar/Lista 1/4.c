#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i=0, k=0, alunos, ponto;
    char op, Gaba[10];

    do
    {
        do
        {
            printf("Informe o numero de alunos: ");
            fflush(stdin);
            scanf("%d", &alunos);

            if (alunos<=0)
            {
                printf("\nERRO: insira um numero maior que 0.\n");
            }
                
        } while (alunos<=0);

        printf("\n===GABARITO===\n");
        for (i = 0; i < 10; i++)
        {
            do
            {
                printf("\nInforme o gabarito da prova para a questao %d: ", i+1);
                fflush(stdin);
                scanf("%c", &Gaba[i]);

                if (Gaba[i] != 'A' && Gaba[i] != 'B' && Gaba[i] != 'C' && Gaba[i] != 'D' && Gaba[i] != 'E' && Gaba[i] != 'a' && Gaba[i] != 'b' && Gaba[i] != 'c' && Gaba[i] != 'd' && Gaba[i] != 'e')
                {
                    printf("\nERRO: informe uma alternativa valida.\n");
                }
                    
            } while (Gaba[i] != 'A' && Gaba[i] != 'B' && Gaba[i] != 'C' && Gaba[i] != 'D' && Gaba[i] != 'E' && Gaba[i] != 'a' && Gaba[i] != 'b' && Gaba[i] != 'c' && Gaba[i] != 'd' && Gaba[i] != 'e');
        }

        char Resp[alunos][10];

        for (k = 0; k < alunos; k++)
        {
            printf("\n===RESPOSTA DO ALUNO %d===\n", k+1);
            for (i = 0; i < 10; i++)
            {
                do
                {
                    printf("\nInforme a resposta do aluno da prova para a questao %d: ", i+1);
                    fflush(stdin);
                    scanf("%c", &Resp[k][i]);
                        
                    if (Resp[k][i] != 'A' && Resp[k][i] != 'B' && Resp[k][i] != 'C' && Resp[k][i] != 'D' && Resp[k][i] != 'E' && Resp[k][i] != 'a' && Resp[k][i] != 'b' && Resp[k][i] != 'c' && Resp[k][i] != 'd' && Resp[k][i] != 'e')
                    {
                        printf("\nERRO: informe uma alternativa valida.\n");
                    }
                    
                } while (Resp[k][i] != 'A' && Resp[k][i] != 'B' && Resp[k][i] != 'C' && Resp[k][i] != 'D' && Resp[k][i] != 'E' && Resp[k][i] != 'a' && Resp[k][i] != 'b' && Resp[k][i] != 'c' && Resp[k][i] != 'd' && Resp[k][i] != 'e');
            }
        }

        for (k = 0; k < alunos; k++)
        {
            ponto=0;
            for (i = 0; i < 10; i++)
            {
                if (Gaba[i]==Resp[k][i])
                {
                    ponto++;
                }
            }
            printf("\nO aluno %d fez %d pontos", k+1, ponto);
        }
        
        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}