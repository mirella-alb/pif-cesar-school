#include <stdio.h>

int main() {
    const float PI = 3.141593f;
    float raio;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    float area = PI * (raio * raio);
    float circunferencia = 2.0f * PI * raio;

    printf("Area: %.4f\n", area);
    printf("Circunferencia: %.4f\n", circunferencia);
    return 0;
}