// Use void * para armazenar o endereço de variáveis de tipos diferentes e mostre os valores convertendo com casts.
#include <stdio.h>
#include <stdlib.h>

int main(){ 
    system("clear");
    int n1 = 10;
    void *genericPointerN1 = &n1; 
    
    printf("\n\n\nInt = %p (pre-cast)", genericPointerN1);

    float n2 = 5.5;
    void *genericPointerN2 = &n2; 

    printf("\nFloat = %p (pre-cast)", genericPointerN2);

    char letter = 'a';
    void *genericPointerLetter = &letter; 

    printf("\nChar = %p (pre-cast)", genericPointerLetter);

    float *intToFloat = (float*) genericPointerN1;
    int *floatToInt = (int*) genericPointerN2;
    int *charToInt = (int*) genericPointerLetter;

    printf("\n\nIntToFloat: %p (post-cast)", &intToFloat);
    printf("\nFloatToInt: %p (post-cast)", &floatToInt);
    printf("\nCharToInt: %p (post-cast)\n\n\n", &charToInt);

    return 0;
}
