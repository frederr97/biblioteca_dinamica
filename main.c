#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"

int main(){

    float num1, num2;
    int menu, num3, num4;

    printf("Olá! Qual operação deseja realizar? \n");
    printf(" 1 - Soma \n 2 - Subtração \n 3 - Média aritmética \n 4 - Potenciação\n 5 - Fatorial\n");
    scanf("\n%d", &menu);

    if (menu == 1){
        printf("Digite os números para a soma: \n");
        scanf("\n%f \n %f", &num1, &num2);
        printf("O resultado da soma é %.2f\n", soma(num1, num2));
    }

    if (menu == 2){
        printf("Digite os números para a subtração: \n");
        scanf("\n%f \n %f", &num1, &num2);
        printf("O resultado da subtração é %.2f.\n", sub(num1, num2));
    }

    if (menu == 3){
        printf("Digite os números para a média: \n");
        scanf("\n%f \n %f", &num1, &num2);
        printf("O resultado da média é %.2f:\n", media(num1, num2));
    }

    if (menu == 4){
        printf("Digite a base e sequentemente a potência: \n");
        scanf("\n%d \n %d", &num3, &num4);
        printf("O resultado da potência é %d.\n", potencia(num3, num4));
    }

    if (menu == 5){
        printf("Digite o número inteiro: \n");
        scanf("\n%d", &num3);
        printf("O resultado do fatorial é %d.\n", fatorial(num3));
    }

}