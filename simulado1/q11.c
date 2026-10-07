#include <stdio.h>

int main() {
    int dias;
    float salario_bruto, gratificacao, imposto, salario_liquido;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dias);

    salario_bruto = dias * 45.00f;
    gratificacao = salario_bruto * 0.05f;
    imposto = salario_bruto * 0.08f;
    salario_liquido = salario_bruto + gratificacao - imposto;

    printf("\n--- HOLERITE DETALHADO ---\n");
    printf("Dias trabalhados: %d\n", dias);
    printf("Salario Bruto:    R$ %.2f\n", salario_bruto);
    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto (8%%):     R$ %.2f\n", imposto);
    printf("---------------------------\n");
    printf("Salario Liquido:  R$ %.2f\n", salario_liquido);

    return 0;
}