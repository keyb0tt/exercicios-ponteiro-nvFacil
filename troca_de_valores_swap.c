// Crie uma função trocar(int *a, int *b) que troque os valores de duas variáveis inteiras.
#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b){
    int rootNum = *a;
    *a = *b;
    *b = rootNum;
}

int main(){
    system("clear");
    int n1 = 2, n2 = 4;

    printf("\n\n ~ Valores Originais ~ \n\n");
    printf("Variável N1: %d\n", n1);
    printf("\nVariável N2: %d\n\n", n2);

    printf(" ~ Aplicação da Função Trocar ~ \n\n");
    trocar(&n1, &n2);
    printf("Variável N1: %d\n", n1);
    printf("\nVariável N2: %d\n\n", n2);
    
    return 0;
}