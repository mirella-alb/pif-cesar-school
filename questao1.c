#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int AnoDeNascimento = 2003;

    printf ("Olá, seu ano de nascimento é: %d", AnoDeNascimento);

    return 0;
}