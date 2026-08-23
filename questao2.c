#include <stdio.h>
#include <windows.h>

int main () {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    float PI = 3.14159;

    printf("O valor de PI é: %.3f", PI);


    return 0;
}