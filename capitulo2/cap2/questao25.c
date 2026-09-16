#include <stdio.h>

int main() {
    float salario_base;
    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &salario_base);

    float gratificacao = salario_base * 0.05f;
    float imposto = salario_base * 0.07f;
    float salario_liquido = salario_base + gratificacao - imposto;

    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto (7%%): R$ %.2f\n", imposto);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);
    return 0;
}