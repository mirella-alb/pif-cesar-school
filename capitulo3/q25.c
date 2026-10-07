#include <stdio.h>

int main() {
    int N, i, divisores = 0;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        
        divisores += (N % i == 0);
    }

    printf("Quantidade de divisores encontrados: %d\n", divisores);
    printf("Conclusao: O numero %d %s\n", N, (divisores == 2) ? "E PRIMO!" : "NAO E PRIMO.");

    return 0;
}