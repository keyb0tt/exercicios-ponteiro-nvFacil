// Atribua um novo valor à variável usando apenas o ponteiro e exiba o resultado.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 1;
    int* ptr = &num;

    system("clear");
    printf("\n\nValor da variável (int num) antes da modificação: %d\n", *ptr);

    printf("\nAloque um novo valor à variável via ponteiro: ");
    scanf("%d", ptr);

    printf("\nNovo valor da variável (int num): %d\n\n", num);

    return 0;
}