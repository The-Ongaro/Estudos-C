#include <stdio.h>
#include "cs50.h"

// // Pede um número inteiro ao usuário.
// int main(void)
// {

//     int n;
//     do
//     {
//         n = get_int("width: ");

//     } while (n < 1);
    
    
//     // Agora iremos imprimir os pontos de interrogação.
//     for(int i = 0; i < n; i++)
//     {
//         printf("?");
//     }
//     printf("\n");
// }


int main(void)
{
    int w;
    int h;
    do
    {
        w = get_int("Width: ");
        h = get_int("heigth: ");
    } while (w < 1 && h < 1);
    

    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < h; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}