#include <stdio.h>

int main(void) {
   int rodadas[4] = {3, 5, 2, 4};
   int *ptr = rodadas;

   printf("Terceira rodada: %d\n", *(ptr + 2));

    /* TODO 3A: altere a segunda rodada para 8
       usando o ponteiro. */
    *(ptr + 1) += 3;

   printf("Rodadas corrigidas: ");

    /* TODO 3B: use um for para mostrar os quatro
       valores por deslocamentos de ptr. */
   for(int i = 0; i < 4; i++){
      printf("\n%do Rodada: %d", (i+1), *(ptr + i));
   }

   printf("\n");
   return 0;
}
