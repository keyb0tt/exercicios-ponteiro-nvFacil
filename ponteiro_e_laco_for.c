// Crie um vetor de 10 inteiros e use apenas um ponteiro para exibir todos os elementos com for.
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i <= 9; i++){
        printf("Array[%d]: %p\n", i + 1, &array[i]);
    }

    return 0;
}