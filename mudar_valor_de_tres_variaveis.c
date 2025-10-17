// Crie uma função que receba três ponteiros (int *a, *b, *c) e multiplique cada valor por 2.
#include <stdio.h>
#include <stdlib.h>

void multFor2(int *a, int *b, int *c){
    *a *= 2;
    *b *= 2;
    *c *= 2;
}

int main(){
    system("clear");
    int n1 = 2, n2 = 4, n3 = 6;

    printf("\n\n ~ Variáveis (valores originais) ~\n\n");
    printf("~ n1: %d\n", n1);
    printf("~ n2: %d\n", n2);
    printf("~ n2: %d\n", n3);

    multFor2(&n1, &n2, &n3);

    printf("\n ~ Variáveis (função aplicada) ~\n\n");
    printf("~ n1: %d\n", n1);
    printf("~ n2: %d\n", n2);
    printf("~ n2: %d\n\n\n", n3);

    return 0;
}