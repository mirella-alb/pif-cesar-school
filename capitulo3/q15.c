#include <stdio.h>

int main() {
    int NUM, i, cont = 0;

    printf("Digite um numero limite inteiro positivo: ");
    scanf("%d", &NUM);

    printf("Multiplos de 3 e 5 simultaneamente no intervalo [1, %d]:\n", NUM);

    
        for (i = 15; i <= NUM; i += 15) {
        printf("%d ", i);
        cont++;
    }

   
    printf("%s\n", (cont == 0) ? "Nenhum numero satisfaz a condicao neste intervalo." : "");

    return 0;
}