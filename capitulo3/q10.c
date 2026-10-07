#include <stdio.h>

int main() {
    int i;

    printf("100 Primeiros Multiplos de 3:\n\n");

    for (i = 1; i <= 100; i++) {
        printf("%d\t%s", i * 3, (i % 10 == 0) ? "\n" : "");
    }

    return 0;
}