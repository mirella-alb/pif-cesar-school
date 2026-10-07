#include <stdio.h>

int main() {
    int A, B, i;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    
    int passo = (A <= B) ? 1 : -1;

    printf("Intervalo entre %d e %d:\n", A, B);

    for (i = A; (passo == 1) ? (i <= B) : (i >= B); i += passo) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}