#include <stdio.h>

int main() {
    float variavel1, variavel2, variavel3;
    
    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &variavel1, &variavel2, &variavel3);
    
    printf("Media: %.2f\n", (variavel1 + variavel2 + variavel3) / 3.0);

    return 0;

}
