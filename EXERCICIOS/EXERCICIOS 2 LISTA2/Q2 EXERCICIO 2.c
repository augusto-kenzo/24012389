#include <stdio.h>

int main() {
    float distancia;
    char comando;

    do {
        printf("Digite a dist�ncia medida pelo sensor (em cm): ");
        scanf("%f", &distancia);

        if (distancia < 10.0) {
            printf("Alerta: Dist�ncia menor que 10 cm detectada!\n");
        } else {
            printf("Dist�ncia registrada: %.2f cm.\n", distancia);
        }

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &comando);
    } while (comando == 's' || comando == 'S');

    printf("Monitoramento encerrado.\n");
    return 0;
}
