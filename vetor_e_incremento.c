// Use ponteiros para somar 10 a todos os elementos de um vetor de 5 inteiros.
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int array[5] = {1,2, 3, 4, 5,}, i = 0;

    printf("\n~ Array original (antes da incrementação) ~\n\n");
    for(int i = 0; i <= 4; i++){
        printf("~ array[%d] = %d \n",i,  *(array + i));
    }

    printf("\n~ Array modificada (após a incrementação dos valores) ~\n\n");

    while(i <= 4){
        *(array + i) += 10;
        printf("~ array[%d] = %d \n",i,  *(array + i));
        if(i == 4){
            printf("\n\n");
        }
        i++;
    }

    return 0;
}