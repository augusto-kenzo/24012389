#include <stdio.h>
#include <stdlib.h>

int main() {
    char np[50];
    int qv;
    float pu, vt, vtd = 0.0;
    char continuar;

    printf("Sistema de gestao das vendas diarias.\n");

    continuar = 's';

    while (continuar == 's') {
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]", np);
        printf("Digite a quantidade vendida: ");
        scanf("%d", &qv);
        printf("Digite o preco unitario: ");
        scanf("%f", &pu);

        vt = qv * pu;
        vtd += vt;

        printf("Produto: %s\n", np);
        printf("Valor total da venda: R$ %.2f\n\n", vt);

        printf("Deseja registrar outra venda? (s/n): ");
        scanf(" %c", &continuar);
    }

    printf("\nValor total arrecadado no dia: R$ %.2f\n", vtd);

    return 0;
}
