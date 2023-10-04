#include <stdio.h>

//  Faça um programa em C que peça dois números do tipo double ao usuário e mostre o resultado da divisão do primeiro pelo segundo 
//  e exiba esse resultado com 3 casas decimais.

int main()
{
    double num1, num2, resultado;
    printf("Digite dois numeros: ");
    scanf("%lf %lf", &num1, &num2);

    resultado = num1 / num2;

    printf("%.2lf dividido por %.2lf e: %.3lf", num1, num2, resultado);
}