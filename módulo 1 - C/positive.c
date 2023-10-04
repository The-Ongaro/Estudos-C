#include <stdio.h>
#include "cs50.h"

// Protype. Função que irá receber um número positivo.
int get_positive_int(void);

// Função main. Irá obter um número positivo por parte do usuário e depois irá imprimir ele.
int main(void)
{
    int i = get_positive_int();
    printf("%i\n", i);
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Número inteiro positivo: ");

    } while (n < 1);
    return n;
    
}