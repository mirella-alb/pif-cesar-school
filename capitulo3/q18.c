#include <stdio.h>

int main() {
    int num, original, invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        invertido = (invertido * 10) + (num % 10);
        num /= 10;
    }

    printf("Numero original: %d\n", original);
    printf("Numero invertido: %d\n", invertido);

    return 0;
}