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
    Erro: ausencia de liberação do bloco anterior antes de nova alocacao de memoria.
    Consequencias: uso de memoria RAM excessiva em caso de repeticao prolongada do ato.
    Correcao: liberar memoria alocada antes de nova alocacao ou uso de outro ponteiro para manter o outro ainda valido.

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
    Erro: ponteiro pendente referenciando um objeto com existencia terminada.
    Consequencias: impedimento de acesso da variavel que antes refereciava algo, gerando comportamento indefinido.
    Correcao: Mudanca de liberacao do objeto referenciado somente apos nao haver mais necessidade de sua existencia.

/* CASO C: o mesmo bloco e liberado duas vezes. */
void caso_c(void) {
    int *pontos = malloc(sizeof *pontos);
    if (pontos == NULL) return;
    free(pontos);
    free(pontos);
}
    Erro: dupla liberacao de um objeto quando o tempo de vida ja havia sido encerrado.
    Consequencias: gera comportamento indefinido.
    Correcao: exclusao da segunda liberacao por free(), usando-a somente se houver outra alocacao de memoria.

/* CASO D: realloc pode apagar a unica referencia em caso de falha. */
void caso_d(void) {
    int *pontos = malloc(3 * sizeof *pontos);
    if (pontos == NULL) return;
    pontos = realloc(pontos, 1000 * sizeof *pontos);
    if (pontos == NULL) return;
    free(pontos);
}
    Erro: tentativa de realocacao no unico ponteiro disponivel.
    Consequencias: pode apagar a unica referencia caso haja uma falha na alocacao, o que pode gerar substituicao do endereco anterior e impedimentos para liberacao posterior.
    Correcao: uso de um ponteiro temporario, atribuindo-o ao ponteiro original apos verificar que a alocacao funcionou.
#endif

int main(void) {
    puts("Missao 4: identificar o erro, a consequencia e a correcao dos casos A-D.");
    puts("Nao retire #if 0 apenas para observar comportamentos indefinidos.");
    return EXIT_SUCCESS;
}
