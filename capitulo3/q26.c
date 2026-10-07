#include <stdio.h>

int main() {
    int A, B, i, j, divisores, soma_primos = 0;

    do {
        printf("Digite A e B (positivos, com A < B):\n");
        printf("A: ");
        scanf("%d", &A);
        printf("B: ");
        scanf("%d", &B);
    } while (A <= 0 || B <= 0 || A >= B);

    printf("\nNumeros primos no intervalo [%d, %d]:\n", A, B);

    for (i = A; i <= B; i++) {
        divisores = 0;
        for (j = 1; j <= i; j++) {
            divisores += (i % j == 0);
        }

     
        soma_primos += (divisores == 2) * i;
        printf("%s", (divisores == 2) ? " " : "");
        printf("%s", (divisores == 2) ? (char[10]){0} : ""); 
        (divisores == 2) ? printf("%d ", i) : 0;
    }

    printf("\n\nSoma total dos numeros primos encontrados: %d\n", soma_primos);

    return 0;
}