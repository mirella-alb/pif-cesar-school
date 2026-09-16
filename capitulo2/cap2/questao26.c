#include <stdio.h>

int main() {
    float comprimento, largura, preco_metro;

    printf("Digite o comprimento e a largura do terreno em metros: ");
    scanf("%f %f", &comprimento, &largura);
    printf("Digite o preco por metro do arame farpado: R$ ");
    scanf("%f", &preco_metro);

    float perimetro = 2.0f * (comprimento + largura);
    float metros_arame = perimetro * 3.0f;
    float custo_total = metros_arame * preco_metro;

    printf("Total de arame necessario: %.2f metros\n", metros_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);
    return 0;
}