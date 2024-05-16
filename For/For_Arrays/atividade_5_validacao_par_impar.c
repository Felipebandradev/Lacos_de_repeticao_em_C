#include <stdio.h>

int main()
{
    int receber_numero[5] = {0,0,0,0,0};
    int receber_numero_par[5], receber_numero_impar[5];
    int numerao, verfica_par, verfica_impar;
    
    for(numerao = 0;numerao < 5;numerao++){
        printf("Digite o %d numero:", numerao + 1);
        scanf("%i", &receber_numero[numerao]);
        
        if(receber_numero[numerao] % 2 == 0){
            receber_numero_par[numerao] = receber_numero[numerao]; 
            verfica_par++;
        } else{
            receber_numero_impar[numerao] = receber_numero[numerao];
            verfica_impar++;
        }
        
    }
    
    printf("Numero digitados: \n");
    for(numerao = 0;numerao < 5; numerao++){
    printf("%d; ",receber_numero[numerao]);
    
    
    }
    
    printf("\n");
    
    printf("Numeros pares digitados: \n");
    if(verfica_par > 0){
        
        for(numerao = 0;numerao < 5; numerao++){
            
          printf("%d; ",receber_numero_par[numerao]);
            
        }
        printf("\n");
    } else {
        printf("Você não digitou nenhum número par \n");
        
    }
    
    printf("Numeros impares digitados: \n");
    if(verfica_impar > 0){
        for(numerao = 0;numerao < 5; numerao++){
            if(receber_numero_impar[numerao] != 0){
                printf("%d; ",receber_numero_impar[numerao]);
            }
        }
        
        printf("\n");
        
    }else {
        printf("Você não digitou nenhum número impar \n");
    }
    
    
}

