#include <stdio.h>

int main()
{
    float num1, num2, resultado;
    printf("Digite dois numeros decimais: ");
    scanf("%f %f", &num1, &num2);

    resultado = num1 * num2;

    printf("%.1f + %.1f = %.2f", num1, num2, resultado);
}