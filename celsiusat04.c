#include <stdio.h>

int main() {
    float Celcius;
    
    printf("Digite o valor em Celcius para transformar em Fahrenheit: ");
    scanf("%f", &Celcius);
    
    printf("Fahrenheit: %.2f\n", Celcius * 1.8 + 32);
    
    return 0;

}
