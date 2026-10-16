#include <stdio.h>

int main(){
    int aluno[5];

        for(int i = 0; i < 5; i++){
            do{
                printf("Insira a nota do aluno %d: ", i);
                scanf("%d", aluno[i]);

            
                if(aluno[i] < 0 || aluno[i] > 10){
                    printf("Numero inserido incorreto! Digite novamente!");    
                }
            }while(aluno[i] < 0 || aluno[i] > 10);
        }

        for(int i = 0; i < 5; i++){
            printf("Notas do aluno:\n");
            printf("Aluno[%d]: %d", i, aluno[i]);
        }
}