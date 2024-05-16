#include <stdio.h>
#include <stdbool.h>

int main()
{
    int saldo = 0, saque, deposito, opcoes;
    bool validador = true;
    
    while(validador == true){
        printf("1- Saldo \n");
        printf("2 - Saque \n");
        printf("3 - Deposito \n");
        printf("4 - Sair \n");
        printf("Digite uma Opção: ");
        scanf("%i", &opcoes);
        
        switch(opcoes){
            case 1: 
                printf("Saldo: R$%i \n", saldo);
            break;
            case 2: 
                printf("Valor do saque: ");
                scanf("%i", &saque);
                if(saldo < saque){
                    printf("saldo para o saque indisponível \n");
                } else {
                    printf("Saque feito com sucesso \n");
                    
                    saldo = saldo - saque;
                };
                
            break;
            
            case 3: 
                printf("Valor do Deposito: ");
                scanf("%i", &deposito);
                saldo = saldo + deposito;
                printf("Deposito feito com sucesso \n");
                
            break;
            
            case 4: 
                printf("Programa encerrado!!");
                validador = false;
            break;
        }
        
        
    }
    
}

