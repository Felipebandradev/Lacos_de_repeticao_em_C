#include <stdio.h>

int main()
{
    // Declarando as variaveis: (i = variavel de controle)
    int clientes, peso, i; 
    float media;
    
    // Declarando clientes
    printf("Quantos clientes tem seu local: ");
    scanf("%i", &clientes);
    
    // Declarando e capurando o peso dos clientes
    for(i = 0; i < clientes; i++){
        printf("Qual o peso do %iº cliente: ", i + 1);
        scanf("%i", &peso);
        
        peso = peso + peso;
    }
    
    // Calculando e exibindo a média de peso dos clientes
    media = peso / clientes;
    
    printf("A média de peso da sua academia é de %.2f Kg", media);
    
}

