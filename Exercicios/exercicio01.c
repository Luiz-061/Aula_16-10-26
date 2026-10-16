#include <stdio.h>

int main()
{
    int senha, senha_correta = 1234, tentativas = 0;
    char usuario[20];
        
   
   
    do{
        printf("Seja bem vindo!\n");
        printf("Digite o seu nome: ");
        scanf("%s", &usuario);
        printf("Insira sua senha: ");
        scanf("%d", &senha);
        if(senha != senha_correta){
            printf("Senha incorreta! Tenta novamente \n");
            tentativas++;
            printf("Tentativas feitas: %d \n", tentativas);
        }   
    }while(senha != senha_correta);
    printf("Seja bem vindo a pagina! %s\n", usuario);
    printf("--------------------------------------------------\n");
    printf("Home      Cardapio     Bebidas      Fale Conosco\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("--------------------------------------------------\n");

    return 0;
}
