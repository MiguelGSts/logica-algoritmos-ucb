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

    int *pontos = calloc(capacidade, sizeof *pontos);
    if (pontos == NULL) {
        fprintf(stderr, "Falha ao reservar memoria para o placar.\n");
        return EXIT_FAILURE;
    }

    for(size_t indice = 0; indice < quantidade; indice++){
        printf("%d ", pontos[indice]);
    }
    printf("\n");

    for (size_t indice = 0; indice < quantidade; indice++) {
        pontos[indice] = valores_iniciais[indice];
    }

    puts("Placar inicial:");
    mostrar_placar(pontos, quantidade);

    /* TODO - MISSAO 1:
       Explique o calculo de bytes em malloc.
        Resposta: O calculo de bytes e feito por meio da quantidade de elementos multiplicada pelo tamanho em bytes de cada elementos.
        Logo: malloc(capacidade * sizeof *pontos) resulta em 3 * 4 = 12 bytes.
       Experimente calloc no lugar de malloc e observe quando os valores sao zero.
       Mantenha sempre a verificacao do retorno e a inicializacao dos dados. */

    /* TODO - MISSAO 2:
       1. Solicite capacidade 5 usando realloc e um ponteiro temporario.
       2. Trate a falha sem perder o endereco original.
       3. Atualize capacidade apenas depois do sucesso.
       4. Preencha as duas posicoes novas com 25 e 17.
       5. Atualize quantidade e mostre o placar completo. */

    size_t novaQuantidade = 5;
    int *temporario = realloc(pontos, novaQuantidade * sizeof *pontos);
    if(temporario == NULL) {
        fprintf(stderr, "Falha ao reservar memoria para o novo placar.\n");
        return EXIT_FAILURE;
    }else{
        pontos = temporario;
        capacidade = 5;

        pontos[3] = 25;
        pontos[4] = 17;
        quantidade = novaQuantidade;
        puts("\nNovo placar:");
        mostrar_placar(pontos, quantidade);
    }


    free(pontos);
    pontos = NULL;
    return EXIT_SUCCESS;
}
