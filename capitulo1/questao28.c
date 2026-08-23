#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); 

    int nota1, nota2, nota3;
    double media = 0;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a primeira nota: ");
    scanf("%d", &nota2);
    printf("Digite a primeira nota: ");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("Sua média: %.2f\n", media);


    return 0;
}