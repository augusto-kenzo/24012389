#include <stdio.h>

int main() {
    int combustivel;

    do {
        printf("Digite o nível de combustível do carro (%%): ");
        scanf("%d", &combustivel);

        if (combustivel < 15) {
            printf("Alerta: Nível de combustível abaixo de 15%%!\n");
            printf("Por favor, reabasteça o veículo.\n");
        } else {
            printf("Nível de combustível adequado.\n");
        }

    } while (combustivel < 100);

    printf("Monitoramento encerrado: Tanque cheio.\n");
    return 0;
}
