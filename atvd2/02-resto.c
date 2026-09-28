#include <stdio.h>

int main() {
    int dividendo;
    int divisor;

    printf("Dividendo e divisor: ");
    scanf("%d %d", &dividendo, &divisor);

    printf("Quociente: %d\n", dividendo / divisor);
    printf("Resto: %d\n", dividendo % divisor);

    return 0;

}

