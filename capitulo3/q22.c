#include <stdio.h>

int main() {
    int N, i, j, valor = 1;

    printf("Digite o numero de linhas N para o Triangulo de Floyd: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", valor);
            valor++;
        }
        printf("\n");
    }

    return 0;
}