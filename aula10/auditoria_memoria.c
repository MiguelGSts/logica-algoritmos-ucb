/* Aula 10 - Operacao Placar: memoria sob demanda
 * Missao 4. Analise estes trechos sem executar os codigos defeituosos.
 * O #if 0 impede que os exemplos perigosos sejam compilados.
 */
#include <stdio.h>
#include <stdlib.h>

#if 0
/* CASO A: a unica referencia a primeira alocacao e sobrescrita. */
void caso_a(void) {
    int *pontos = malloc(3 * sizeof *pontos);
    if (pontos == NULL) return;
    pontos = malloc(5 * sizeof *pontos);
    free(pontos);
}

/* CASO B: um alias acessa o bloco depois de free. */
void caso_b(void) {
    int *pontos = malloc(2 * sizeof *pontos);
    if (pontos == NULL) return;
    pontos[0] = 9;
    int *consulta = pontos;
    free(pontos);
    pontos = NULL;
    printf("%d\n", consulta[0]);
}

/* CASO C: o mesmo bloco e liberado duas vezes. */
void caso_c(void) {
    int *pontos = malloc(sizeof *pontos);
    if (pontos == NULL) return;
    free(pontos);
    free(pontos);
}

/* CASO D: realloc pode apagar a unica referencia em caso de falha. */
void caso_d(void) {
    int *pontos = malloc(3 * sizeof *pontos);
    if (pontos == NULL) return;
    pontos = realloc(pontos, 1000 * sizeof *pontos);
    if (pontos == NULL) return;
    free(pontos);
}
#endif

int main(void) {
    puts("Missao 4: identificar o erro, a consequencia e a correcao dos casos A-D.");
    puts("Nao retire #if 0 apenas para observar comportamentos indefinidos.");
    return EXIT_SUCCESS;
}
