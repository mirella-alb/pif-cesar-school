#include <stdio.h>

int main() {
    int N, i, j;

    do {
        printf("Digite uma dimensao impar N para o X (3 a 19): ");
        scanf("%d", &N);
    } while (N < 3 || N > 19 || N % 2 == 0);

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            
            printf("%c", (j == i || j == (N - 1 - i)) ? '*' : ' ');
        }
        printf("\n");
    }

    return 0;
}