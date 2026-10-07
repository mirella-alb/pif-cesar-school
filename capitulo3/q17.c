#include <stdio.h>

int main() {
    float nota = 0.0, soma = 0.0;
    float maior = 0.0, menor = 10.0;
    int total = 0;

    printf("Digite a nota do aluno 1 (ou -1.0 para encerrar): ");
    scanf("%f", &nota);

        while (nota >= 0.0 && nota <= 10.0) {
        
         maior = (nota > maior || total == 0) ? nota : maior;
         menor = (nota < menor || total == 0) ? nota : menor;

        soma += nota;
        total++;

        printf("Digite a nota do aluno %d (ou -1.0 para encerrar): ", total + 1);
        scanf("%f", &nota);
    }

    printf("\n--- ESTATISTICAS DA TURMA ---\n");
    printf("a) Total de alunos avaliados: %d\n", total);
    printf("b) Maior nota da turma: %.2f\n", maior);
    printf("c) Menor nota da turma: %.2f\n", menor);
    printf("d) Media geral da turma: %.2f\n", total > 0 ? (soma / total) : 0.0);

    return 0;
}