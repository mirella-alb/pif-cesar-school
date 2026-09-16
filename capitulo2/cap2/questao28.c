#include <stdio.h>

int main() {
    float horas_normais, horas_extras;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);
    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);

    float salario_bruto = (horas_normais * 10.00f) + (horas_extras * 15.00f);


    float imposto = (salario_bruto > 12000.00f) ? ((salario_bruto - 12000.00f) * 0.10f) : 0.00f;
    float salario_liquido = salario_bruto - imposto;

    printf("Salario Anual Bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto Retido: R$ %.2f\n", imposto);
    printf("Salario Anual Liquido: R$ %.2f\n", salario_liquido);
    return 0;
}