#include <stdio.h>

int main()
{
    int notas[4];
    int i, media, soma = 0, divisor;
    
    for(i = 0; i < 4; i++){
        printf("Digite a %iª nota(1 a 10): ", i + 1);
        scanf("%i", &notas[i]);
    }
    
    for(i = 0; i < 4; i++){
        soma = notas[i] + soma;
        divisor++;
    }
    
    media = soma/divisor;
    
    printf("A média do aluno é de %d", media);
    
    
}


