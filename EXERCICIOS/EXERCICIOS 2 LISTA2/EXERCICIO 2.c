#include <stdio.h>

int main() {
    int combustivel;

    do {
        printf("Digite o n�vel de combust�vel do carro (%%): ");
        scanf("%d", &combustivel);

        if (combustivel < 15) {
            printf("Alerta: N�vel de combust�vel abaixo de 15%%!\n");
            printf("Por favor, reabaste�a o ve�culo.\n");
        } else {
            printf("N�vel de combust�vel adequado.\n");
        }

    } while (combustivel < 100);

    printf("Monitoramento encerrado: Tanque cheio.\n");
    return 0;
}
