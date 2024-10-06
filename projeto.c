#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int num1, int num2){
    printf("\n\nEscolha dois números\n");
    scanf("%d %d",&num1, &num2);
    num1 = num1 + num2;
    return num1;
}

int sub(int num1, int num2){
    printf("\n\nEscolha dois números\n");
    scanf("%d %d",&num1, &num2);
    num1 = num1 - num2;
    return num1;
}

int mult(int num1, int num2){
    printf("\n\nEscolha dois números\n");
    scanf("%d %d",&num1, &num2);
    num1 = num1 * num2;
    return num1;
}

int divi(int num1, int num2) {
    printf("\n\nEscolha dois números:\n");
    scanf("%d %d",&num1, &num2);

        if(num1 == 0 || num2 == 0){
            printf("Expressão inválida"); 
            num1 = 0;
            return num1;  
        }

        else {
            num1 = num1 / num2;
            return num1;
        }
}


void main() {
    int escolha,num1,num2;

    setlocale(LC_ALL, "Portuguese");

    printf("\t\tBoa tarde\t\t");
    printf("\n\n1.Soma\n2.Subtração\n3.Multiplicação\n4.Divisão");
    printf("\n\nEscolha uma das operações acima: ");
    scanf("%d",&escolha);
    
    if(escolha == 1) {
        int res = soma(num1,num2);
        printf("\nResultado: %d",res);
    }

    else if(escolha == 2) {
        int res = sub(num1,num2);
        printf("\nResultado: %d",res);
    }

    else if(escolha == 3) {
        int res = mult(num1,num2);
        printf("\nResultado: %d",res);
    }

    else if(escolha == 4) {
        int res = divi(num1,num2);
        printf("\nResultado: %d",res);
    }

    else {
        printf("Valor inserido inválido");
    }
}
