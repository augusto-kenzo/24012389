#include <stdio.h>
#include <string.h>

int main() {
    int x = 2, y = 2; // Posi��o inicial do rob� no centro do grid 5x5
    char comando[10];

    printf("Simula��o de Navega��o Aut�noma (Grid 5x5)\n");
    printf("Posi��o inicial do rob�: (%d, %d)\n", x, y);

    do {
        printf("\nDigite o comando (cima, baixo, esquerda, direita) ou 'parar' para encerrar: ");
        scanf("%s", comando);

        if (strcmp(comando, "cima") == 0) {
            if (y > 0) {
                y--;
                printf("Rob� moveu para cima. Posi��o atual: (%d, %d)\n", x, y);
            } else {
                printf("Movimento inv�lido! O rob� n�o pode sair do grid.\n");
            }
        } else if (strcmp(comando, "baixo") == 0) {
            if (y < 4) {
                y++;
                printf("Rob� moveu para baixo. Posi��o atual: (%d, %d)\n", x, y);
            } else {
                printf("Movimento inv�lido! O rob� n�o pode sair do grid.\n");
            }
        } else if (strcmp(comando, "esquerda") == 0) {
            if (x > 0) {
                x--;
                printf("Rob� moveu para a esquerda. Posi��o atual: (%d, %d)\n", x, y);
            } else {
                printf("Movimento inv�lido! O rob� n�o pode sair do grid.\n");
            }
        } else if (strcmp(comando, "direita") == 0) {
            if (x < 4) {
                x++;
                printf("Rob� moveu para a direita. Posi��o atual: (%d, %d)\n", x, y);
            } else {
                printf("Movimento inv�lido! O rob� n�o pode sair do grid.\n");
            }
        } else if (strcmp(comando, "parar") != 0) {
            printf("Comando inv�lido. Tente novamente.\n");
        }

    } while (strcmp(comando, "parar") != 0);

    printf("Simula��o encerrada. Posi��o final do rob�: (%d, %d)\n", x, y);
    return 0;
}
