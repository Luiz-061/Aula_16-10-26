#include <stdio.h>

int main(){
    int n, soma = 0, quantidade = 0, maior;
    
    do{
        
        printf("Insira um numero: ");
        scanf("%d", &n);
        printf("%d\n", n);
        if(n > 0){
            quantidade++;
            soma+=n;
        }
        if(quantidade == 1 || n > maior){
            maior = n;
        }
        
        
        
    }while(n != 0);
    printf("Media: %d\n", soma / quantidade);
    printf("Maior numero digitado: %d \n", maior);
    
    return 0;
}