#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);

    // Evita divisão por zero matematicamente usando um teste de validação
    if (b != 0) {
        printf("Divisão real: %.2f\n", (float)a / b);
    } else {
        printf("Divisão por zero não é permitida na matemática.\n");
    }

    return 0;
}