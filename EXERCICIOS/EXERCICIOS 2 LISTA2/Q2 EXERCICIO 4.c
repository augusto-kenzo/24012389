 #include <stdio.h>

int main() {
    int nivelBateria;

    do {
        printf("Digite o nível da bateria do robô (%%): ");
        scanf("%d", &nivelBateria);

        if (nivelBateria < 20) {
            printf("Alerta: Nível de bateria abaixo de 20%%! Recarga necessária.\n");
        } else {
            printf("Nível de bateria: %d%%.\n", nivelBateria);
        }

    } while (nivelBateria < 100);

    printf("Bateria totalmente carregada. Monitoramento encerrado.\n");
    return 0;
}
