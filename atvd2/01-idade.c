#include <stdio.h>

#define ANO_ATUAL 2026

int main() {
    int ano_nascimento;

    printf("Ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Idade: %d\n", ANO_ATUAL - ano_nascimento);
    
    return 0;
}
