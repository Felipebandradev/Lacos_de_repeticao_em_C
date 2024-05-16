#include <stdio.h>

int main()
{
  int idade, contador = 1, comparador = 0;
  
  while(contador <= 5){
      printf("digite a %iº idade: ", contador);
      scanf("%i", &idade);
      
      if(idade >= 18){
          comparador++;
      }
      contador++;
  }
  
  printf("você cadastrou %i pessoas maior de idade", comparador);
  
}

