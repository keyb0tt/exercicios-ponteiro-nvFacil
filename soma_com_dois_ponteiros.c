// Crie duas variáveis inteiras, aponte dois ponteiros para elas e mostre a soma de seus valores via ponteiros.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 1, sum = 0;
    int n1 = 1, n2 = 2;
    int *ptr1 = &n1, *ptr2 = &n2;

    system("clear");
    printf("\n\nVariável 1 (n1): %d\nVariável 2 (n2): %d\n", n1, n2);
    printf("\nPonteiro 1 (ptr1): %d\nPonteiro 2 (ptr2): %d\n", *ptr1, *ptr2);
    printf("\nSoma dos ponteiros (usando ponteiro): %d\n\n", *ptr1 + *ptr2);

    return 0;
}