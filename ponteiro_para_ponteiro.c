// Crie uma variável, um ponteiro e um ponteiro para ponteiro; exiba o valor acessando com **.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int var = 1;
    int *ptr = &var;
    int **ptrParaPtr = &ptr;

    system("clear");
    printf("\n\n%d\n\n", **ptrParaPtr);

    return 0;
}