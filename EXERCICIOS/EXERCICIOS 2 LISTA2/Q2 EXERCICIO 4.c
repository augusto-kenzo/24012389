 #include <stdio.h>

int main() {
    int nivelBateria;

    do {
        printf("Digite o n�vel da bateria do rob� (%%): ");
        scanf("%d", &nivelBateria);

        if (nivelBateria < 20) {
            printf("Alerta: N�vel de bateria abaixo de 20%%! Recarga necess�ria.\n");
        } else {
            printf("N�vel de bateria: %d%%.\n", nivelBateria);
        }

    } while (nivelBateria < 100);

    printf("Bateria totalmente carregada. Monitoramento encerrado.\n");
    return 0;
}
