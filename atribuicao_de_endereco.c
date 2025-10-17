// Declare um ponteiro para inteiro, faça-o apontar para a variável do exercício anterior e exiba o valor por meio do ponteiro.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 1;    

    int* ptr = &num;

    system("clear");
    printf("\nVariável: int num = 1\n");
    printf("\nEndereço da váriavel: %p\n", ptr);
    printf("\nValor da váriavel por meio de ponteiro: %d\n\n\n", *ptr);

    return 0;
}
