#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    float Lapis = 4.88;
    float Borrachas = 234.54;
    float Canetas = 42.04;
    float Cadernos = 8.00;
    float Fitas = 13.05;

    printf("Os valores dos produtos são:\n");
    printf(" Lapis: %12.2f\n Borrachas: %12.2f\n Canetas: %12.2f\n Cadernos: %12.2f\n Fitas:%12.2f", Lapis, Borrachas, Canetas, Cadernos, Fitas);



    return 0;
}

