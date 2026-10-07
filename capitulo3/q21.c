#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char letra_secreta, palpite = ' ';
    int tentativas = 0;

    srand(time(NULL));
    letra_secreta = rand() % 26 + 'a';

    printf("=== JOGO DE ADIVINHACAO DE LETRAS ===\n");
    printf("Tente adivinhar a letra secreta entre 'a' e 'z'.\n\n");

    while (palpite != letra_secreta) {
        printf("Digite o seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;

    
        printf("%s\n\n", (palpite < letra_secreta) ? "Dica: A letra secreta vem DEPOIS no alfabeto." :
                         (palpite > letra_secreta) ? "Dica: A letra secreta vem ANTES no alfabeto." :
                         "Parabens! Voce acertou!");
    }

    printf("Total de tentativas: %d\n", tentativas);

    return 0;
}