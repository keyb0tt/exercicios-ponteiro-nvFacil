// Leia um número inteiro diretamente por meio de um ponteiro e mostre-o.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *num;

    system("clear");
    printf("\n\nInsira o número: ");
    scanf("%d", num);

    system("clear");
    printf("\n\nNúmero inserido: %d\n\n", *num);

    return 0;
}