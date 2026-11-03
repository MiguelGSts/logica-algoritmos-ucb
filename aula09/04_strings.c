#include <stdio.h>

int main(void) {
    char nome[] = "BETA";
    char *ptr = nome;

    printf("Antes: %s\n", nome);

    /* TODO 4A: altere B para Z usando ptr. */
    *ptr = 'Z';

    printf("Depois: %s\n", nome);
    printf("Letra por letra: ");

    /* TODO 4B: percorra os caracteres usando um
       ponteiro cursor, ate encontrar '\0'.
       Exiba cada caractere com putchar(). */
    for(char *cursor = nome; *cursor != '\0'; cursor++){
        putchar(*cursor);
    }

    putchar('\n');
    return 0;
}
