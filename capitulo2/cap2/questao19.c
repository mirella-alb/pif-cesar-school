#include <stdio.h>

int main() {
    int dias;
    const float TAXA_DIARIA = 30.00f;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    float bruto = dias * TAXA_DIARIA;
    float liquido = bruto * (1.0f - 0.08f);

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor liquido a receber: R$ %.2f\n", liquido);
    return 0;
}