#include <stdio.h>
#include "cs50.h"

int main(void)
{
    char c = get_char("Você concorda? ");

    // Um sinal de '=' é atribuição da direita para a esquerda. Dois sinais de '==' representa igualdade.
    if(c == 's' || c == 'S')
    // Utilizamos um operador lógico '||' que representa 'ou'.
    {
        printf("Concordo.");
    }
    else
    {
        printf("Não concordo.");
    }
}