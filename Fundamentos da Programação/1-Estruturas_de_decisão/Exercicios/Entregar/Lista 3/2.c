#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void) {

    char A;

    printf("Digite uma letra do alfabeto: ");
        scanf("%c", &A);


    A= toupper (A);

    printf("A letra em maiusculo fica:%c\n", A);

    if(A >= 'a' && A <= 'z' || A >= 'A' && A <= 'Z')
    {
        printf("Essa letra faz parte do alfabeto\n");
    } 

    switch (A)
    {
        case 'A': printf("\n Vogal, %c \n", A);break;  
   
        case 'E': printf("\n Vogal, %c \n", A);break;  
   
        case 'I': printf("\n Vogal, %c \n", A);break;  
   
        case 'O': printf("\n Vogal, %c \n", A);break;  
   
        case 'U': printf("\n Vogal, %c \n", A);break;  

        case 'B' : printf("\n Consoante, %c \n ", A);break;

        case 'C' : printf("\n Consoante, %c \n ", A);break;

        case 'D' : printf("\n Consoante, %c \n ", A);break;

        case 'F' : printf("\n Consoante, %c \n ", A);break;

        case 'G' : printf("\n Consoante, %c \n ", A);break;

        case 'J' : printf("\n Consoante, %c \n ", A);break;

        case 'K' : printf("\n Consoante, %c \n ", A);break;

        case 'L' : printf("\n Consoante, %c \n ", A);break;

        case 'M' : printf("\n Consoante, %c \n ", A);break;

        case 'N' : printf("\n Consoante, %c \n ", A);break;

        case 'P' : printf("\n Consoante, %c \n ", A);break;

        case 'Q' : printf("\n Consoante, %c \n ", A);break;

        case 'R' : printf("\n Consoante, %c \n ", A);break;

        case 'S' : printf("\n Consoante, %c \n ", A);break;

        case 'T' : printf("\n Consoante, %c \n ", A);break;

        case 'V' : printf("\n Consoante, %c \n ", A);break;

        case 'W' : printf("\n Consoante, %c \n ", A);break;

        case 'X' : printf("\n Consoante, %c \n ", A);break;

        case 'Z' : printf("\n Consoante, %c \n ", A);break;

        default: printf("O caracter digitado nao pertence ao alfabeto\n");break;
    }

    return 0;
} 