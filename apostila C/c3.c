#include <stdio.h>

// Crie um programa em C que peça dois números decimais ao usuário e mostre o produto deles, com precisão de dois números.

int main()
{
    float num1, num2, resultado;
    printf("Digite um numero decimal: ");
    scanf("%f", &num1);

    printf("Digite outro numero decimal: ");
    scanf("%f", &num2);

    resultado = num1 * num2;

    printf("%.1f + %.1f = %.2f", num1, num2, resultado);
}