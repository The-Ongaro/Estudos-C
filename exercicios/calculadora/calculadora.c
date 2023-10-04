#include <stdio.h>

// char: %c;
// int: %d;
// double: %lf;

int main() {
    char operacao;
    double num1, num2, resultado;

    printf("Bem-vind(a) a calculadora feita na linguagem C!\n");
    printf("Informe a operacao que deseja realizar: \n");
    scanf("%c", &operacao);

    printf("Informe a primeiro numero: \n");
    scanf("%lf", &num1);

    printf("Informe o segundo numero: \n");
    scanf("%lf", &num2);

    switch(operacao) {
        case '+':
        resultado = num1 + num2;
            break;

        case '-':
        resultado = num1 - num2;
            break;

        case '*':
        resultado = num1 * num2;
            break;

        case '/':

        if(num2 == 0) {
            printf("Impossivel realizar divisao por 0.");
            return 1;
        } else {
            resultado = num1 / num2;
        }
            break;

        default:
            printf("ERRO: Operção inválida.");
        return 1;
    }

    printf("Resultado: %.2lf %c %.2lf = %.2lf", num1, operacao, num2, resultado);
    
    return 0;
}