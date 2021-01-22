#include <stdio.h>

int main(void) {

    int fat, i, n=0, cont=1, j=0;
    char op;

    do{
        for (i=1; i<= 12; i++) 
        {
            printf("%d !=>", i);
            fat = 1;

            for (j = i; j >=2; j--)
            {
                printf("%d *", j);
                fat = fat * j;
            }
            
            
            printf("1 = %d\n", fat);
        }

        printf("\n\nDeseja repetir o programa (S ou N): ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 'S' || op == 's');
  
  return (0);
}