#include <stdio.h>

int main()
{
   int vetor[5] = {1,2,3,4,5};
   int contador;
   
   for(contador = 4; contador >= 0;contador--){
       printf("Valor %d\n", vetor[contador]);
   }
}

