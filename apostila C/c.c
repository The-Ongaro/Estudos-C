#include <stdio.h>

int main()
{
   int numero;
   printf("Digite um numero para saber o dobro do mesmo: ");
   // Essa função nos diz "armazene na variável 'numero' um inteiro".
   //O erro mais comum é esquecer o &, cuidado!
   scanf("%d", &numero);

   printf("O dobro do numero digitado e: %d", numero * 2);
}