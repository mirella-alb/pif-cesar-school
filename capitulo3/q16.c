#include <stdio.h>

int main() {
    const int SENHA_CORRETA = 2026;
    int senha_digitada = 0;
    int tentativas = 0;

     while (tentativas < 3 && senha_digitada != SENHA_CORRETA) {
        printf("Digite a senha (tentativa %d/3): ", tentativas + 1);
        scanf("%d", &senha_digitada);
        tentativas++;
    }

    
    printf("\n%s\n", (senha_digitada == SENHA_CORRETA) ? "Acesso Concedido!" : "Conta Bloqueada por Seguranca!");

    return 0;
}