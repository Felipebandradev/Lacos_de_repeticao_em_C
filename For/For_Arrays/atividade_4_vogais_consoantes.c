#include <stdio.h>

int main()
{
    char receber_valor[10], receber_vogal[10], receber_consoante[10];
    int controle, qtdVogais, qtdConsoantes;
    
    for(controle = 0;controle < 10; controle++){
        printf("Digite a %d letra:",controle + 1);
        scanf(" %c", &receber_valor[controle]);
        
        switch(receber_valor[controle]){
            case 'a': case 'e': case 'i': case 'o': case 'u':
            receber_vogal[controle] = receber_valor[controle];
            qtdVogais++;
            break;
            
            default:
            receber_consoante[controle] = receber_valor[controle];
            qtdConsoantes++;
            break;
        }
        
    }
    
    printf("Letras digitadas: \n");
    for(controle = 0; controle < 10; controle++){
        printf("%c; ", receber_valor[controle]);
    }
    
    printf("\n");
    
    if(qtdVogais >0 ){
        
        printf("Vogais digitadas: \n");
        for(controle = 0; controle < 10; controle++){
        
            if(!(receber_vogal[controle] == 0) && !(receber_vogal[controle] == ' ')){
                printf("%c; ", receber_vogal[controle]);
            }
        }
    
    } else {
        printf("Você não digitou nenhuma vogal");
    }
    
    printf("\n");
    
    if(qtdConsoantes > 0 ){
        
        printf("Consoantes digitadas: \n");
        for(controle = 0; controle < 10; controle++){
            
            if(!(receber_consoante[controle] == 0) && !(receber_consoante[controle] == ' ')){
                printf("%c; ", receber_consoante[controle]);
            }
        }
    
    } else {
        printf("Você não digitou nenhuma consoante");
    }
    
    
}
    

