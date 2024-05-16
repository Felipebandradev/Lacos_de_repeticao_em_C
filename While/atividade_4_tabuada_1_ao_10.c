#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Declaração das varíaveis: 
    int numero_digitado, multiplicador = 1;
    bool controle = true;
    
    //Loop para tabuada
    while(controle == true){
        printf("Digite um numero de 1 a 10: ");
        scanf("%i", &numero_digitado);
        
        if(numero_digitado > 10){
            printf("Numero inválido \n");
        } else {
            while( multiplicador <= 10){
                printf("%i x %i = %i \n", numero_digitado, multiplicador, multiplicador * numero_digitado);
                multiplicador++;
            }
                controle = false;
        }
    }
    
}
