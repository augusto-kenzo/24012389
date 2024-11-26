#include <stdio.h>

int main() {
    float temperatura;

    do {
        printf("Digite a temperatura atual (°C): ");
        scanf("%f", &temperatura);

        if (temperatura < 20.0 || temperatura > 25.0) {
            printf("Alerta: Temperatura fora da faixa aceitavel (20°C a 25°C)!\n");
            printf("Ajustando ventilacao...\n");
        } else {
            printf("Temperatura esta dentro da faixa aceitavel.\n");
        }

    } while (temperatura < 20.0 || temperatura > 25.0);

    printf("Monitoramento encerrado: Temperatura ajustada.\n");
    return 0;
}
