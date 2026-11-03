#include <stdio.h>

void adicionarPorValor(int pontos, int bonus) {
    pontos += bonus;
    printf("Dentro da funcao por valor: %d\n", pontos);
}

void adicionarPorEndereco(int *pontos, int bonus) {
    /* TODO 2: acrescente bonus ao objeto apontado. */
    *pontos += bonus;
    printf("Dentro da funcao por endereco: %d\n", *pontos);
}

int main(void) {
    int pontos = 12;

    adicionarPorValor(pontos, 5);
    printf("Fora, apos valor: %d\n", pontos);

    adicionarPorEndereco(&pontos, 5);
    printf("Fora, apos endereco: %d\n", pontos);

    return 0;
}
