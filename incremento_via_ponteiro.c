// Crie uma função incrementar(int *x) que adicione 1 ao valor apontado.
#include <stdio.h>
#include <stdlib.h>

void incrementar(int *x){
    *x += 1;
}

int main(){
    system("clear");
    int num = 1;

    printf("\n\nValor inicial da variável int num: %d\n", num);
    printf("\n\n ~ Aplicação da função incrementar ~ \n\n");
    incrementar(&num);
    printf("\nValor da variável int num: %d\n\n\n", num);



    return 0;
}