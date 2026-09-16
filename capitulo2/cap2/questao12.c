#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int antecessor = num;
    int sucessor = num;

    --antecessor; // Decrementa 1 unidade
    ++sucessor;   // Incrementa 1 unidade

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);
    return 0;
}