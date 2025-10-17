// Declare duas variáveis e compare seus endereços de memória.
#include <stdlib.h>
#include <stdio.h>

int main(){ 
    system("clear");
    int n1 = 1, n2 = 1;
    int *ptr1 = &n1;
    int *ptr2 = &n2;
    
    printf("\n\nPonteiro 1: %p\n", ptr1);
    printf("\nPonteiro 2: %p\n\n\n", ptr2);

    return 0;
}
