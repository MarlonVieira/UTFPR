#include <stdio.h>
#include <stdlib.h>

int main (void) {

    float  S, imp, NS;
    int op;

    printf("Insira o seu salario:");
        scanf("%f", &S);


    printf("\nOpcao 1-Imposto\nOpcao 2-Novo Salario\nOpcao 3-Classificacao\nEscolha uma opcao:");
        scanf("%d", &op);
    switch (op)
    {
        case 1 : printf("\nOpcao 1-Imposto\n");
        
            if ((S<1000) && (S>0))
                
                printf("O seu valor do imposto eh de: R$%.2f \n", imp=S*0.05);
                
            if ((S>=1000) && (S<=1500))
            
                printf("O seu valor do imposto eh de: R$%.2f \n", imp=S*0.1);
            
            if (S>1500)

                printf("O seu valor do imposto eh de: R$%.2f \n", imp=S*0.15);

        ;break;

        case 2 : printf("\nOpcao 2-Novo Salario\n");

            if ((S<1000) && (S>0))

                printf("O valor aumentado no seu salario eh de R$75,00. Portanto seu salario eh: %.2f \n", NS=S+75);

            if ((S>=1000) && (S<=1500))

                printf("O valor aumentado no seu salario eh de R$100,00. Portanto seu salario eh: %.2f \n", NS=S+100);
            if (S>1500)
        
                printf("O valor aumentado no seu salario eh de R$150,00. Portanto seu salario eh: %.2f \n", NS=S+150);
    
        break;



        case 3 : printf("\nOpcao 3-Classificacao\n");

            if (S>=1000)

                printf("Sua classificacao eh Categoria A");

            if (S<1000)
            
            printf("Sua classificacao eh Categoria B");

        break;




        default : printf("\nERRO:%d Nao eh uma opcao\n", op);
    }
    
    return (0);
}