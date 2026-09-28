#include <stdio.h>

int main () {
    int numero;
    
    printf("Digite um Numero Inteiro: ");
    scanf("%d", &numero);
    
    printf("Par e positivo? %d\n", ((numero % 2  == 0) && (numero > 0)));
    
    return 0;
} 
