// Use sizeof para mostrar quantos bytes cada tipo (int, float, double, char) ocupa na memória.
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int intSize = 1;
    float floatSize = 1;
    double doubleSize = 1;
    char charSize = 'a';

    printf("\n\nO Tipo int ocupa %zu bytes na memória",sizeof(intSize));    
    printf("\nO Tipo float ocupa %zu bytes na memória",sizeof(floatSize));    
    printf("\nO Tipo double ocupa %zu bytes na memória",sizeof(doubleSize));    
    printf("\nO Tipo char ocupa %zu bytes na memória\n\n\n",sizeof(charSize));    

    return 0;
}