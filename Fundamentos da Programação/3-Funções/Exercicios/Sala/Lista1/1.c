#include <stdio.h>

int iadcionar (int N1, int N2)
{
    return(N1+N2);
}

int isubtrair (int N1, int N2)
{
    return(N1-N2);
}

int imultiplicar (int N1, int N2)
{
    return(N1*N2);
}

float idividir (int N1, int N2)
{
    return(N1/N2);
}

int iresto (int N1, int N2)
{
    return (N1%N2);
}

int main() {

    int x, y, adcionar, subtrair, multiplicar, dividir, resto;
    char op, opc;

    do
    {
        printf("A - Adicionar\n");
        printf("S - Subitrair\n");
        printf("M - Multiplicar\n");
        printf("D - Dividir\n");
        printf("R - Resto\n");

        printf("Opcao: ");
        fflush(stdin);
        scanf ("%c", &opc);

        switch (opc)
        {
            case 'A':
            case 'a':
                printf ("Insira um numero: ");
                fflush(stdin);
                scanf ("%d", &x);
        
                printf ("Insira um numero: ");
                fflush(stdin);
                scanf ("%d", &y);

                adcionar = iadcionar(x,y);

                printf ("Soma = %d", adcionar);
                            
            break;

            case'S':
            case's':
                printf ("Insira um numero: ");
                fflush(stdin);
                scanf ("%d", &x);
        
                printf ("Insira um numero: ");
                fflush(stdin);
                scanf ("%d", &y);

                subtrair = isubtrair(x,y);

                printf ("Subtracao = %d", subtrair);

            break;

            case 'M':
            case 'm':
                printf ("Insira um numero: ");
                fflush(stdin);
                scanf ("%d", &x);
        
                printf ("Insira um numero: ");
                fflush(stdin);
                scanf ("%d", &y);

                multiplicar = imultiplicar(x,y);

                printf ("Multiplicacao = %d", multiplicar);
                            
            break;

            case 'D':
            case 'd':
                printf ("Insira um numero: ");
                fflush(stdin);
                scanf ("%d", &x);
        
                printf ("Insira um numero: ");
                fflush(stdin);
                scanf ("%d", &y);

                dividir = idividir(x,y);

                printf ("Divisao = %d", dividir);
                            
            break;

            case 'R':
            case 'r':
                printf ("Insira um numero: ");
                fflush(stdin);
                scanf ("%d", &x);
        
                printf ("Insira um numero: ");
                fflush(stdin);
                scanf ("%d", &y);

                printf ("Resto = %d", iresto(x, y));
                            
            break;
                    
            default:
            printf("ERRO: opcao invalida");
            break;
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');

    return(0);
}