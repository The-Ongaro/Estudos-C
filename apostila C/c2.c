#include <stdio.h>

int main()
{
    int num1, num2, resultado;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    resultado = num1 + num2;

    printf("%d + %d = %d", num1, num2, resultado);
}