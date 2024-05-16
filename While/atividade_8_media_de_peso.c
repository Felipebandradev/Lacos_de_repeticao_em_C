#include <stdio.h>

int main()
{
   int pessoas, peso, total_pessoas;
   float media;
   
   printf("Quantas pessoas você tem na academia: ");
   scanf("%i", &pessoas);
    
    total_pessoas = pessoas;
   while( pessoas >= 1 ){
       printf("Digite o peso %iª pessoa: ", pessoas);
       scanf("%i",&peso);
       
       peso = peso + peso;
       pessoas--;
    
   }
   
   media = peso/total_pessoas;
   
   
   printf("A média de peso da sua academia é de %.2f Kg", media);
   
}

