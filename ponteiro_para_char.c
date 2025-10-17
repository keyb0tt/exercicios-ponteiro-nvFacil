// Crie uma variável char, um ponteiro para char, e exiba o valor e o endereço.
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    char var = 'a';
    char *ptr = &var;

    printf("\n\n%p\n", ptr);
    printf("\n%c\n\n", *ptr);

    return 0;
}