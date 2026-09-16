#include <stdio.h>

int main() {
    int h_inicio, m_inicio, s_inicio, duracao_segundos;

    printf("Digite o horario de inicio (hh mm ss): ");
    scanf("%d %d %d", &h_inicio, &m_inicio, &s_inicio);

    printf("Digite a duracao da experiencia em segundos: ");
    scanf("%d", &duracao_segundos);

    int inicio_em_segundos = h_inicio * 3600 + m_inicio * 60 + s_inicio;
    int total_segundos = inicio_em_segundos + duracao_segundos;

    int h_fim = (total_segundos / 3600) % 24;
    int m_fim = (total_segundos % 3600) / 60;
    int s_fim = total_segundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);
    return 0;
}