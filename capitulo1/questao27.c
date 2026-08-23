#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int segundos;

    printf("Digite um intervalo de tempo em segundos: ");
    scanf("%d", &segundos);

    int horas = segundos/3600; 
    int minutos = (segundos % 3600) / 60;
    int segundos_restantes = segundos % 60;

    printf("Agora são: %d horas, %d minutos e %d segundos", horas, minutos, segundos_restantes);



    return 0;
}