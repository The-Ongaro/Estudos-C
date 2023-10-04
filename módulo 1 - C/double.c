#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int a = get_int("x: ");

    printf("%i\n", a * 2);
}