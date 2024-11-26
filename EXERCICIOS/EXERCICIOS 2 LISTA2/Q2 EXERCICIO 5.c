#include <stdio.h>
#include <string.h>

int main() {
    int x = 2, y = 2; // Posição inicial do robô no centro do grid 5x5
    char comando[10];

    printf("Simulação de Navegação Autônoma (Grid 5x5)\n");
    printf("Posição inicial do robô: (%d, %d)\n", x, y);

    do {
        printf("\nDigite o comando (cima, baixo, esquerda, direita) ou 'parar' para encerrar: ");
        scanf("%s", comando);

        if (strcmp(comando, "cima") == 0) {
            if (y > 0) {
                y--;
                printf("Robô moveu para cima. Posição atual: (%d, %d)\n", x, y);
            } else {
                printf("Movimento inválido! O robô não pode sair do grid.\n");
            }
        } else if (strcmp(comando, "baixo") == 0) {
            if (y < 4) {
                y++;
                printf("Robô moveu para baixo. Posição atual: (%d, %d)\n", x, y);
            } else {
                printf("Movimento inválido! O robô não pode sair do grid.\n");
            }
        } else if (strcmp(comando, "esquerda") == 0) {
            if (x > 0) {
                x--;
                printf("Robô moveu para a esquerda. Posição atual: (%d, %d)\n", x, y);
            } else {
                printf("Movimento inválido! O robô não pode sair do grid.\n");
            }
        } else if (strcmp(comando, "direita") == 0) {
            if (x < 4) {
                x++;
                printf("Robô moveu para a direita. Posição atual: (%d, %d)\n", x, y);
            } else {
                printf("Movimento inválido! O robô não pode sair do grid.\n");
            }
        } else if (strcmp(comando, "parar") != 0) {
            printf("Comando inválido. Tente novamente.\n");
        }

    } while (strcmp(comando, "parar") != 0);

    printf("Simulação encerrada. Posição final do robô: (%d, %d)\n", x, y);
    return 0;
}
