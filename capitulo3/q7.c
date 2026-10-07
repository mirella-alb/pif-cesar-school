#include <stdio.h>

int main() {
    int i;

    printf("--- Versao FOR ---\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("--- Versao WHILE ---\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    printf("--- Versao DO-WHILE ---\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");

    /*
     * COMENTÁRIO:
     * A estrutura mais adequada para este caso é o for, pois o número
     * de iterações é fixo
     */

    return 0;
}