// Crie uma função void dobrar(int *p) que dobre o valor apontado.
#include <stdio.h>
#include <stdlib.h>

void dobrar(int *p){
    *p *= 2;
}

int main(){
    int n1 = 2;
    system("clear");
    printf("\n\nValor original da variável n1: %d\n", n1);
    dobrar(&n1);
    printf("\nValor da variável n1 após ser dobrada usando ponteiro: %d\n\n", n1);
    
    return 0;
}