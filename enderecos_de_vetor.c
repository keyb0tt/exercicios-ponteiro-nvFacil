// Mostre os endereços dos elementos de um vetor e perceba o deslocamento entre eles.
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i <= 9; i++){
        printf("vetor[%d]: %p ",i + 1, vetor + i);
        printf("\n");
    }

    return 0;
}