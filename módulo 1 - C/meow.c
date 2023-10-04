#include <stdio.h>
#include "cs50.h"

// Prototype, é uma forma inteligente de dizer ao compilador que haverá uma função, nesse caso  chamada 'meow', mas que ainda não há.
void meow(void);

int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        meow();
    }
}

// Criação de função.
void meow(void)
{
    printf("Meow\n");
}