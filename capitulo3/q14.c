#include <stdio.h>

int main() {
    int i;
    long long int soma_quadrados = 0;

    printf("--- NUMEROS E SEUS QUADRADOS (1 a 100) ---\n");

    for (i = 1; i <= 100; i++) {
        long long int quadrado = (long long int)i * i;
        printf("%d -> %lld\n", i, quadrado);
        soma_quadrados += quadrado;
    }

    printf("\nSoma total dos quadrados: %lld\n", soma_quadrados);

    return 0;
}