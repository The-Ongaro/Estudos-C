#include <stdio.h>
#include "cs50.h"

int main(void)
{
    string awnser = get_string("What´s your name? ");

    printf("Hello, %s\n", awnser);
}