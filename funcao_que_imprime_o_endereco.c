// Crie uma função void exibirEndereco(int *x) que mostre o endereço passado como parâmetro.
#include <stdio.h>
#include <stdlib.h>

void exibirEndereco(int *x){
    printf("\n\n%p\n\n\n", x);
}

int main(){
    system("clear");
    int n1 = 10;
    int *x = &n1;

    exibirEndereco(x);

    return 0;
}