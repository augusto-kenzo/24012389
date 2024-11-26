#include <stdio.h>

int main() {
    float distancia;
    char comando;

    do {
        printf("Digite a distância medida pelo sensor (em cm): ");
        scanf("%f", &distancia);

        if (distancia < 10.0) {
            printf("Alerta: Distância menor que 10 cm detectada!\n");
        } else {
            printf("Distância registrada: %.2f cm.\n", distancia);
        }

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &comando);
    } while (comando == 's' || comando == 'S');

    printf("Monitoramento encerrado.\n");
    return 0;
}
