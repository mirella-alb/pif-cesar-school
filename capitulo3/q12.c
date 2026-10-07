#include <stdio.h>

int main() {
    int c;
    float f, k;

    printf("=========================================\n");
    printf("  CELSIUS (C) | FAHRENHEIT (F) | KELVIN (K)\n");
    printf("=========================================\n");

    for (c = 0; c <= 100; c += 5) {
        f = (9.0 * c) / 5.0 + 32.0;
        k = c + 273.15;
        printf("    %3dC      |    %6.2fF    | %6.2f K\n", c, f, k);
    }

    return 0;
}