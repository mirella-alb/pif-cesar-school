#include <stdio.h>

int main() {
    int L, i, j;

    do {
        printf("Digite a dimensao do lado do quadrado L (3 a 20): ");
        scanf("%d", &L);
    } while (L < 3 || L > 20);

    for (i = 0; i < L; i++) {
        for (j = 0; j < L; j++) {
    
            printf("%c", (i == 0 || i == L - 1 || j == 0 || j == L - 1) ? 'X' : ' ');
        }
        printf("\n");
    }

    return 0;
}