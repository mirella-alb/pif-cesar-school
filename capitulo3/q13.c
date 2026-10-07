#include <stdio.h>

int main() {
    int N, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    
    for (i = 1; i <= N; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", N, fatorial);

    return 0;
}