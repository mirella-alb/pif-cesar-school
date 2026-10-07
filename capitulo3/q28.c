#include <stdio.h>

int main() {
    int opcao;
    float salario, novo_salario, desconto;

    do {
        printf("\n=====================================\n");
        printf(" SISTEMA DE FOLHA DE PAGAMENTO\n");
        printf("=====================================\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nDigite o salario atual R$: ");
                scanf("%f", &salario);
                novo_salario = salario * ((salario <= 2000.00f) ? 1.15f : 1.10f);
                printf("Novo Salario com Reajuste: R$ %.2f\n", novo_salario);
                break;

            case 2:
                printf("\nDigite o salario atual R$: ");
                scanf("%f", &salario);
                desconto = salario * ((salario <= 3000.00f) ? 0.08f : 0.15f);
                printf("Desconto de Imposto de Renda: R$ %.2f\n", desconto);
                printf("Salario Liquido: R$ %.2f\n", salario - desconto);
                break;

            case 3:
                printf("\nEncerrando o programa... Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida! Por favor escolha 1, 2 ou 3.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}