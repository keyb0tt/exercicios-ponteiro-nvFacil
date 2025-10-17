// Crie uma variável float, um ponteiro para float e mostre o valor e o endereço.
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    float var = 1.2;
    float *ptr = &var;

    printf("%.1f\n\n", *ptr);
    printf("%p", ptr);

    return 0;
}