/* Aula 10 - Operacao Placar: memoria sob demanda
 * Missoes 1 e 2. Complete os trechos indicados por TODO.
 * Compilacao: gcc -std=c11 -Wall -Wextra -pedantic placar_dinamico.c -o placar
 */
#include <stdio.h>
#include <stdlib.h>

static void mostrar_placar(const int *pontos, size_t quantidade) {
    for (size_t indice = 0; indice < quantidade; indice++) {
        printf("Participante %zu: %d pontos\n", indice + 1, pontos[indice]);
    }
}

int main(void) {
    size_t capacidade = 3;
    size_t quantidade = 3;
    const int valores_iniciais[] = {12, 20, 18};

    int *pontos = malloc(capacidade * sizeof *pontos);
    if (pontos == NULL) {
        fprintf(stderr, "Falha ao reservar memoria para o placar.\n");
        return EXIT_FAILURE;
    }

    for (size_t indice = 0; indice < quantidade; indice++) {
        pontos[indice] = valores_iniciais[indice];
    }

    puts("Placar inicial:");
    mostrar_placar(pontos, quantidade);

    /* TODO - MISSAO 1:
       Explique o calculo de bytes em malloc.
       Experimente calloc no lugar de malloc e observe quando os valores sao zero.
       Mantenha sempre a verificacao do retorno e a inicializacao dos dados. */

    /* TODO - MISSAO 2:
       1. Solicite capacidade 5 usando realloc e um ponteiro temporario.
       2. Trate a falha sem perder o endereco original.
       3. Atualize capacidade apenas depois do sucesso.
       4. Preencha as duas posicoes novas com 25 e 17.
       5. Atualize quantidade e mostre o placar completo. */

    free(pontos);
    pontos = NULL;
    return EXIT_SUCCESS;
}
