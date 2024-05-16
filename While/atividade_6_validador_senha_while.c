#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool validador = true;
    int senha, compSenha;
        printf("Declare uma senha: ");
        scanf("%i",&senha);
        
    while(validador == true){
        printf("Digite sua senha: ");
        scanf("%i", &compSenha);
        
        if(compSenha == senha){
            printf("senha correta !!");
            
            validador = false; 
        } else{
            printf("senha incorreta!! \n");
        }
    }
}