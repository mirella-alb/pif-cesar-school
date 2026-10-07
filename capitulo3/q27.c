#include <stdio.h>

int main() {
    int valor, c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("Digite o valor do saque em R$: ");
    scanf("%d", &valor);

    int sobrou = valor;

    while (sobrou >= 100) { sobrou -= 100; c100++; }
    while (sobrou >= 50)  { sobrou -= 50;  c50++;  }
    while (sobrou >= 20)  { sobrou -= 20;  c20++;  }
    while (sobrou >= 10)  { sobrou -= 10;  c10++;  }
    while (sobrou >= 5)   { sobrou -= 5;   c5++;   }
    while (sobrou >= 2)   { sobrou -= 2;   c2++;   }

    printf("\nDecomposicao do Saque de R$ %d:\n", valor);
    printf("- Cedulas de R$ 100: %d\n", c100);
    printf("- Cedulas de R$ 50:  %d\n", c50);
    printf("- Cedulas de R$ 20:  %d\n", c20);
    printf("- Cedulas de R$ 10:  %d\n", c10);
    printf("- Cedulas de R$ 5:   %d\n", c5);
    printf("- Cedulas de R$ 2:   %d\n", c2);

    return 0;
}