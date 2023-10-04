#include <stdio.h>

// Exercício: Faça um programa que peça dois inteiros ao usuário e que mostre a diferença (subtração) entre o primeiro e segundo número.

int main()
{
    int num1, num2, diferenca;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    diferenca = num1 - num2;

    printf("A diferenca entre %d e %d e de: %d", num1, num2, diferenca);
}