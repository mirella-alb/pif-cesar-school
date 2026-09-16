#include <stdio.h>

int main() {
    char c;
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    /* O %d faz o C exibir o valor numerico correspondente 
       na tabela ASCII (de 0 a 255) que o caractere ocupa na memoria. */
    printf("Caractere: '%c' | Codigo ASCII: %d\n", c, c);
    return 0;
}