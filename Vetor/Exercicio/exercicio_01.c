#include <stdio.h>

int main()
{
   float v[5];
   int i = 0;
   
  while(i < 5){
      do{
            printf("Digite a nota do Aluno %d: ", i);
            scanf("%f", &v[i]);
            if(v[i] < 0 || v[i] > 10){
                printf("Erro ao inserir a nota! Digite novamente! \n");
            }
       
           
       }while(v[i] < 0 || v[i] > 10);
       i++;
       
  }
   
   for(int i = 0; i < 5; i++){
       printf("Aluno matricula v[%d] = %.2f \n", i, v[i]);
   }

    return 0;
}
