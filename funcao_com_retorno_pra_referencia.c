// Crie uma função que receba dois números e retorne o endereço do maior deles.
#include <stdio.h>
#include <stdlib.h>

int *maiorEndereco(int n1, int n2){
    int *ptr;
    if(n1 > n2){
        ptr = &n1;
    } else {
        ptr = &n2;
    }

    return ptr;
}

int main(){
    system("clear");
    int n1, n2;

    printf("\n\nInsira o primeiro número: ");
    scanf("%d", &n1);
    printf("Insira o segundo número: ");
    scanf("%d", &n2);

    printf("Endereço de memória do maior número: %p\n\n", maiorEndereco(n1, n2));
    
    return 0;
}