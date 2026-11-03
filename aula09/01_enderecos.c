#include <stdio.h>

int main(void) {
    int pontos = 12;
    int *ptr = &pontos;

    printf("Antes: %d\n", pontos);

    /* TODO 1: altere pontos para 18 usando ptr. */

    *ptr += 6;
    printf("Depois: %d\n", pontos);
    printf("Via ponteiro: %d\n", *ptr);
    printf("Endereco: %p\n", (void *)&pontos);

    return 0;
}
