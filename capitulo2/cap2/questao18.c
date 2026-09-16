#include <stdio.h>

int main() {
    const float PI = 3.141593f;
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    float area_superficie = 4.0f * PI * (raio * raio);
    float volume = (4.0f / 3.0f) * PI * (raio * raio * raio);

    printf("Area da superficie: %.4f\n", area_superficie);
    printf("Volume da esfera: %.4f\n", volume);
    return 0;
}