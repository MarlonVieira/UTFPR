#include <stdio.h>
#include "Diversos.h"

int main () {

    int N1, x, y;
    char op, opc, tipo;
    float N2 ,Con, cot;
    
    do
    {

    printf("1 - Calcula o quadrado de um numero\n");
    printf("2 - Converte centimetros para polegada\n");
    printf("3 - Converte um valor para dolar ou real\n");
    printf("4 - Multiplica dois numeros\n");

    printf("Opcao: ");
    fflush(stdin);
    scanf("%c", &opc);
    
        switch (opc)
        {
            case '1':
                do
                {
                    printf("\nInforme um valor: ");
                    fflush(stdin);
                    scanf("%d", &N1);

                    if (N1<=0)
                    {
                    printf("\nERRO: insira um numero maior que 0.");
                    }

                } while (N1<=0);
                
                printf("Quadrado: %d", Quadrado(N1));

            break;

            case '2':
                do
                {
                    printf("\nInforme um valor em centimetros a ser convertido em polegadas: ");
                    fflush(stdin);
                    scanf("%f", &N2);

                    if (N2<=0)
                    {
                    printf("\nERRO: insira um numero maior que 0.");
                    }

                } while (N2<=0);
                
                printf("Polegadas: %.2f", Polegada(N2));

            break;

            case '3':
                do
                {
                    printf("\nInforme um valor que deseja converter: ");
                    fflush(stdin);
                    scanf("%f", &Con);

                    if (Con<=0)
                    {
                        printf("\nERRO: insira um numero maior que 0.");
                    }
                    
                } while (Con<=0);
                
                do
                {
                    printf("Informe o valor da cotacao: ");
                    fflush(stdin);
                    scanf("%f", &cot);

                    if (cot<=0)
                    {
                        printf("\nERRO: insira um numero maior que 0.");
                    }
                    
                } while (cot<=0);

                do
                {
                    printf("Informe tipo de conversao (D/d-Dolar ou R/r-Real): ");
                    fflush(stdin);
                    scanf("%c", &tipo);

                    if (tipo!='D' && tipo!='d' && tipo!='R' && tipo!='r')
                    {
                        printf("\nERRO: insira um valor igual a D/d-Dolar ou R/r-Real.\n\n");
                    }
                    
                } while (tipo!='D' && tipo!='d' && tipo!='R' && tipo!='r');

                printf("O valor obtido eh: %.2f\n\n\n", ConverterMoedas(Con, cot, tipo));

            break;
        
            case '4':
                do
                {
                    printf("Informe um valor: ");
                    fflush(stdin);
                    scanf("%d", &x);

                    if (x<=0)
                    {
                        printf("\nERRO: insira um numero maior que 0.");
                    }
                    
                } while (x<=0);

                do
                {
                    printf("Informe um outro valor: ");
                    fflush(stdin);
                    scanf("%d", &y);

                    if (y<=0)
                    {
                        printf("\nERRO: insira um numero maior que 0.");
                    }
                    
                } while (y<=0);

                printf("Resultado: %d", Tabuada(x , y));

            break;
        
            default: 
                printf("\nERRO: opcao inserida invalida\n");
            break;
        }

        printf("\n\nDeseja repetir o programa? (S/N) ");
        fflush (stdin);
        scanf("%c", &op);
    } while (op == 'S' || op == 's');

    return(0);
} 
