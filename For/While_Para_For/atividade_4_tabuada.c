#include <stdio.h>
#include <stdbool.h>

int main()
{
   
    int numero, i;
    bool controle = true;
    
    while(controle == true){
        printf("Digite um numero de 1 a 10: ");
        scanf("%i", &numero);
        
        if(numero <= 10){
            for (i = 0; i <= 10 ; i++){
                 printf("%i x %i = %i \n",numero, i, numero * i);
            } 
            controle = false;
        } else {
            printf("Número invalido!! \n");
        }
 
    }
    
}


