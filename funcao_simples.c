// Crie uma função void dobrar(int *p) que dobre o valor apontado.
#include <stdio.h>
#include <stdlib.h>

void dobrar(int *p){
    *p *= 2;
}

int main(){
    int n1 = 2;

    dobrar(&n1);

    printf("%d", n1);


    return 0;
}