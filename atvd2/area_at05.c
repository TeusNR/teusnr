#include <stdio.h>

int main() {
    float base, altura;

    printf("Digite a Base e Altura. ");
    scanf("%f %f", &base, &altura);
    
    printf("Area: %.2f\n", base * altura);
    printf("Perimetro: %.2f\n", 2 * (base+altura));
    

    return 0;

}
