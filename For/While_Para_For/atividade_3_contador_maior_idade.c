/*Faça um programa que receba a idade de 5 pessoas e imprima quantas pessoas
são maiores que 18 anos*/
#include <stdio.h>

int main()
{
    int i, idade, maiores;
    
    for(i = 0; i < 5; i++){
        printf("Digite a idade da %i° pessoa: ", i + 1);
        scanf("%i",&idade);
        
        if(idade >= 18){
            maiores++;
        }
        
    }
     printf("\n");
    printf("%i pessoas são maiores de 18 anos", maiores);
    
}

