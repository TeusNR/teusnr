#include <stdio.h>
#define PI 3.14159


int main() {
    float raio;
    
    printf("raio: ");
    scanf("%f", &raio);
    
    printf("Area: %.2f\n", PI * raio * raio);
    return 0;

}
