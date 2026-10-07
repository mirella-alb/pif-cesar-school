#include <stdio.h>

int main() {
    int N, i;
    long long t1 = 0, t2 = 1, proximo;

    printf("Digite o termo desejado da Sequencia de Fibonacci (N): ");
    scanf("%d", &N);

    printf("\nSequencia de Fibonacci ate o %d termo:\n", N);

    for (i = 1; i <= N; i++) {
        printf("%lld ", t2);

        proximo = t1 + t2;
        t1 = t2;
        t2 = proximo;
    }

    printf("\n\nO %d° termo da Sequencia de Fibonacci e: %lld\n", N, t1);

    return 0;
}