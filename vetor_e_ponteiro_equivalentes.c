// Crie um vetor de 5 inteiros e percorra-o com um ponteiro, exibindo todos os valores.
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr = array;

    for(int i = 0; i <= 4; i++){
        printf("\n%d\n", *(array + i));
    }
    
    return 0;
}