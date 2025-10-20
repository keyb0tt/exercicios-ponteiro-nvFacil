// Crie um ponteiro para constante e tente modificar o valor (observe o erro).
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int n1 = 1, n2 = 2;
    const int *num = &n1;

    // *num = n2;

    return 0;
}