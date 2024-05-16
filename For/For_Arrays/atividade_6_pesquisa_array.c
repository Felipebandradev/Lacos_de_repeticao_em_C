// Pesquisa com For
#include <stdio.h>
#include <stdbool.h>
int main()
{
    // Declaração das variáveís: (i = variável de controle)
    int array_de_numeros[5], numero_pesquisado, i;
    bool resultado = false;
    
    // Função para declarar os números do array
    for(i = 0; i < 5;i++){
        printf("Digite o %iº número: ", i + 1);
        scanf("%i", &array_de_numeros[i]);
    };
    
    // Input para fazer a pesquisa
    printf("Pesquise um numero: ");
    scanf("%i", &numero_pesquisado);
    
    // Função para fazer a pesquisa
    for(i = 0; i < 5; i++){
        if(numero_pesquisado == array_de_numeros[i]){
          resultado = true;
        }
    };
    
    // Condicional e exibição do resultado da pesquisa
    if(resultado == true){
        printf("Resultado encontrado"); 
    } else{
        printf("Sem resultados para sua pesquisa");
    }
    
}


