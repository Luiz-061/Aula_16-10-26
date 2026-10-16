#include <stdio.h>

int main(){
    int num;
    char res;

    do{
        printf("Insira um numero: ");
        scanf("%d", &num);

        printf("O dobro do numero: %d\n E: %d\n", num, num + num);
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &res);
    }while(res == 's' || res == 'S');
    printf("Fim do programa!");
}