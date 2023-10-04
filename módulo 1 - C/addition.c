#include <stdio.h>
#include "cs50.h"

// int 32 bits. 4 bilhões de números possíveis, sendo 2 bi positivos e 2 bi negativos.
// long 64 bits.

int main(void)
{
    // Sabemos que com o int podemos somar apenas até 4 bilhões de números. Seguindo a linha de 2 bi positivos e 2 bi negativos.
    // Se quisermos passar dessa quantidade temos que usar o long.
    // int x = get_int("x: ");
    // int y = get_int("y: ");

    // printf("%i\n", x + y);

    long x = get_long("x: ");
    long y = get_long("y: ");

    printf("%li\n", x + y);
}