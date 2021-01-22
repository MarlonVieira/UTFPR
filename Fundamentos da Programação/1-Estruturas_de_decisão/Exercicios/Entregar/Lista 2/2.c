#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int num1, num2, num3, op;
    
    printf("\nOpcao 1-Escrever os valores A,B e C em ordem crescente\nOpcao 2-Escrever os valores A,B e C em ordem Drescente\nOpcao 3-Escrever os valores A,B e C que sao multiplos de 2\nEscolha uma opcao:");
        scanf("%d", &op);

        printf ("\ninsira um numero inteiro:");
            scanf("%d", &num1);

        printf ("\ninsira um 2o numero inteiro:");
            scanf("%d", &num2);

        printf ("\ninsira um 3o numero inteiro:");
            scanf("%d", &num3);

    
    switch (op)
    {
        case 1 : printf("\nOpcao 1-Ordem crescente\n");

            if ((num1 > num2) && (num1 > num3) && (num2 > num3))

                printf("Os valores em ordem crescente sao Menor:%d Meio:%d Maior:%d\n", num3, num2, num1);

                else if ((num1 > num2) && (num1 > num3) && (num3 > num2))
            
                    printf("Os valores em ordem crescente sao Menor:%d Meio:%d Maior:%d\n", num2, num3, num1);
            
            
                    else if ((num2 > num1) && (num2 > num3) && (num3 > num1))

                        printf("Os valores em ordem crescente sao Menor:%d Meio:%d Maior:%d\n", num1, num3, num2);
                
                        else if ((num2 > num1) && (num2 > num3) && (num1 > num3))

                            printf("Os valores em ordem crescente sao Menor:%d Meio:%d Maior:%d\n", num3, num1, num2);
            
                            else if ((num3 > num1) && (num3 > num2) && (num1 > num2))

                                printf("Os valores em ordem crescente sao Menor:%d Meio:%d Maior:%d\n", num2, num1, num3);
                                
                                    else
                                    {
                                        printf("Os valores em ordem crescente sao Menor:%d Meio:%d Maior:%d\n", num1, num2, num3);
                                    }
                                    
                break;

        case 2 : printf("\nOpcao 2-Ordem decrescente\n");

                if (num1 > num2 && num2 > num3 && num1 > num3)

                    printf("Os valores em ordem decrescente sao Maior:%d Meio:%d Menor:%d\n", num1, num2, num3); 

                        else if (num2 > num1 && num2 > num3 && num1 > num3)

                            printf("Os valores em ordem decrescente sao Maior:%d Meio:%d Menor:%d\n", num2, num1, num3); 

                                else if (num3 > num2 && num3 > num1 && num2 > num1)
                           
                                    printf("Os valores em ordem decrescente sao Maior:%d Meio:%d Menor:%d\n", num3, num2, num1); 

                                    else if (num1 > num2 && num1 > num3 && num3 > num2)
                        
                                        printf("Os valores em ordem decrescente sao Maior:%d Meio:%d Menor:%d\n", num1, num3, num2); 

                                        else if (num3 > num2 && num1 > num2 && num3 > num1)

                                            printf("Os valores em ordem decrescente sao Maior:%d Meio:%d Menor:%d\n", num3, num1, num2); 
                                            
                                            else

                                                printf("Os valores em ordem decrescente sao Maior:%d Meio:%d Menor:%d\n", num2, num3, num1); 
                           
            break;
            
        case 3 : printf("\nOpcao 3-Multiplos de 2\n");
    
            if ((num1 % 2 == 0) && (num2 % 2== 0) && (num3 % 2 == 0))
        
                printf("Os numeros %d, %d e %d sao multiplos de 2", num1, num2, num3);
        
                    else if ((num1 % 2 == 0) && (num2 % 2== 0))
            
                        printf("Os numeros %d e %d sao multiplos de 2", num1, num2);
            
                            else if ((num1 % 2 == 0) && (num3 % 2 == 0))
                
                                printf("Os numeros %d e %d sao multiplos de 2", num1, num3);
                
                                else if ((num2 % 2== 0) && (num3 % 2 == 0))
                    
                                    printf("Os numeros %d e %d sao multiplos de 2", num2, num3);
                    
                                    else if (num1 % 2 == 0)
                        
                                        printf("Apenas o numero %d eh divisivel por 2", num1);
                        
                                        else if (num2 % 2 == 0)
                            
                                            printf("Apenas o numero %d eh divisivel por 2", num2);
                            
                                            else if (num3 % 2 == 0)
                                
                                                printf("Apenas o numero %d eh divisivel por 2", num3);
       
                                                else
        
                                                    printf("Nenhum numero eh divisivel por 2");
            
        break;
        
        
                                    
                                        
                                    

        default : printf("\nERRO:%d Nao eh uma opcao\n", op);
    }         

    return (0);
}