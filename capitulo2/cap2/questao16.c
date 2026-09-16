#include <stdio.h>
#include <math.h>

int main() {
    float altura_degrau_cm, altura_desejada_m;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &altura_degrau_cm);
    printf("Digite a altura total desejada (em metros): ");
    scanf("%f", &altura_desejada_m);

    float altura_desejada_cm = altura_desejada_m * 100.0f;
    int degraus = (int)ceil(altura_desejada_cm / altura_degrau_cm);

    printf("Numero minimo de degraus: %d\n", degraus);
    return 0;
}