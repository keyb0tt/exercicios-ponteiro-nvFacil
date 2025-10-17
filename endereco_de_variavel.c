// Declare uma variável inteira e exiba o valor e o endereço dela na tela.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 1;    

    int* ptr = &num;

    system("clear");
    printf("\nVariável: int num = 1\n");
    printf("\nEndereço da váriavel: %p\n", ptr);
    printf("\nValor da váriavel alocada no endereço de memória: %d\n\n\n", num);

    return 0;
}