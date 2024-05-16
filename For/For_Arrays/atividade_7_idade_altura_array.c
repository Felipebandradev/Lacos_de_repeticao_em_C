 /* Desafio:
Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada
informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa
a ordem lida.  
*/
#include <stdio.h>

int main()
{
    
    // Declaração das variaveis: (i = variavel de controle)
    int array_de_idades[5], array_de_altura[5], i;
    
    // Função para receber as idades e altura
    for(i = 0; i < 5; i++){
        printf("Digite a idade e altura da %iª pessoa \n", i + 1);
        printf("Idade: ");
        scanf("%i", &array_de_idades[i]);
        
        printf("Altura: ");
        scanf("%i", &array_de_altura[i]);
    };
    
    // Função para exibir as pessoas cadastradas
    for(i = 4; i >= 0; i--){
        printf(
        "%iª pessoa, idade: %i, altura: %icm. \n", 
        i + 1, 
        array_de_idades[i], 
        array_de_altura[i]
        );
    };
    
}

