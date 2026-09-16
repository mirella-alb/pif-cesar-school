#include <stdio.h>
#include <math.h>

int main() {
    double lado_a, lado_b;
    printf("Digite os valores dos dois catetos: ");
    scanf("%lf %lf", &lado_a, &lado_b);

    double hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));

    printf("Comprimento da hipotenusa: %.4lf\n", hipotenusa);
    return 0;
}