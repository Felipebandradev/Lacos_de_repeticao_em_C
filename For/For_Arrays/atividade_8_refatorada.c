
#include <stdio.h>

int main()
{
    // Declarando as veriaveis: (i = variavel de controle)
    int vetor1[5], vetor2[5], vetor3[10], i, b = 0, c = 0;
    
    // Função para declarar o 1º array 
    for(i = 0; i < 5; i++){
        printf("Digite %iº valor da 1ª caixa: ", i + 1);
        scanf("%i", &vetor1[i]);
    };
    
    printf("\n");
    
    // Função para declarar o 2º array 
    for(i = 0; i < 5; i++){
        printf("Digite %iº valor da 2º caixa: ", i + 1);
        scanf("%i", &vetor2[i]);
    };
    
    printf("\n");
    
    // Declarando os valores do 3º array
  
    for(i = 0; i < 10; i++){
      if( (i % 2) == 0 ){
          vetor3[i] = vetor1[b];
          b++;
      } else {
            vetor3[i] = vetor2[c];
          c++;
      }
    };
    
   
    
    printf("1ª caixa: ");
    for(i = 0; i < 5; i++){
       printf("%i; ", vetor1[i]);
    };
    printf("\n");
    printf("2ª caixa: ");
    for(i = 0; i < 5; i++){
       printf("%i; ", vetor2[i]);
    };
    printf("\n");
    printf("Todos os valores: ");
    for(i = 0; i < 10; i++){
       printf("%i; ", vetor3[i]);
    };
    
    
}
