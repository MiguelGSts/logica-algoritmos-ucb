#include <stddef.h>
#include <stdio.h>

typedef struct {
    char nome[16];
    int pontos;
} Equipe;

void aplicarBonus(Equipe *alvo, int bonus) {
    if (alvo == NULL) {
        return;
    }

    /* TODO 5A: use o operador -> para somar
       bonus ao campo pontos do registro. */
    alvo->pontos += bonus;
}

int main(void) {
    Equipe equipe = {"Zeta", 12};
    int bonus[3] = {4, 3, 6};
    int *ptrBonus = bonus;

    for (int i = 0; i < 3; i++) {
        /* TODO 5B: chame aplicarBonus com o
           endereco de equipe e o bonus da
           posicao i, acessado por ptrBonus. */
        aplicarBonus(&equipe, *(ptrBonus + i));
    }

    printf("Equipe: %s\n", equipe.nome);
    printf("Pontuacao final: %d\n", equipe.pontos);
    return 0;
}
