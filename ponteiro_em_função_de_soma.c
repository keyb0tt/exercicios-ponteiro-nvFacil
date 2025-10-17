// Crie uma função somar(int *a, int *b, int *resultado) que armazene a soma de a + b em resultado.
#include <stdio.h>
#include <stdlib.h>

void somar(int *a, int *b, int *resultado){
    *resultado = *a + *b;
}

int main(){
    system("clear");
    int n1 = 5, n2 = 5, resultado = 0;

    printf("\n\n ~ Variáveis (valores original) ~\n\n");
    printf("~ n1: %d\n", n1);
    printf("~ n2: %d\n", n2);
    printf("~ resultado: %d\n", resultado);

    somar(&n1, &n2, &resultado);
    
    printf("\n ~ Variáveis (função somar aplicada) ~\n\n");
    printf("~ n1: %d\n", n1);
    printf("~ n2: %d\n", n2);
    printf("~ resultado: %d\n\n", resultado);

    return 0;
}
