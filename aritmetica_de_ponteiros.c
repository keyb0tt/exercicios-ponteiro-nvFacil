// Mostre o efeito de ptr + 1 sobre o endereço de memória de um vetor.
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int array[3] = {1, 2, 3};

    printf("%p\n\n", &*(array));
    printf("%p\n\n", &*(array + 1));

    return 0;
}