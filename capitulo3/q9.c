#include <stdio.h>

int main() {
    float valor = 0.0, soma = 0.0;
    int quantidade = 0;

    printf("Digite valores reais positivos (ou um valor negativo para encerrar):\n");
    printf("Valor: ");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma += valor;
        quantidade++;
        printf("Valor: ");
        scanf("%f", &valor);
    }

    printf("\nQuantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);
    printf("Media aritmetica: %.2f\n", quantidade > 0 ? (soma / quantidade) : 0.0);

    return 0;
}