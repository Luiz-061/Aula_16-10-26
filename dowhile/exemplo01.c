#include <stdio.h>

int main(){
    float nota;

    do{
        printf("Digite a nota: ");
        scanf("%f", &nota);
        if(nota < 0 || nota > 10){
            printf("Nota invalida! tente novamente");
        }
    }while(nota < 0 || nota > 10);

    printf("Nota registrada: %.1f\n", nota);

    return 0;
}