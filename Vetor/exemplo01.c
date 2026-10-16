#include <stdio.h>

int main(){
    int v[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
    
    
}