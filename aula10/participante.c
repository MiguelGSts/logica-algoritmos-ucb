/* Aula 10 - Operacao Placar: memoria sob demanda
 * Missao 3. Dois blocos dinamicos: registro e nome.
 * Compilacao: gcc -std=c11 -Wall -Wextra -pedantic participante.c -o participante
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char *nome;
    int pontos;
} Participante;

int main(void) {
    const char nome_origem[] = "Marina";

    /* TODO - MISSAO 3:
       1. Reserve com malloc um registro Participante.
       2. Confira se a primeira alocacao funcionou.
       3. Reserve o campo nome com strlen(nome_origem) + 1.
       4. Se a segunda alocacao falhar, libere o registro e encerre.
       5. Copie nome_origem para o bloco do nome.
       6. Registre codigo 101 e 27 pontos, exibindo os tres campos.
       7. Libere primeiro o nome, depois o registro.
       Para conferir a solução, a saida esperada e:
       101 | Marina | 27 pontos */

    puts("Complete o cadastro dinamico nesta missao.");
    (void)nome_origem;
    return EXIT_SUCCESS;
}
