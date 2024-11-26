 #include <stdio.h>
#include <string.h>

int main() {
    char comando[10];

    do {
        printf("Digite o comando para mover o rob� (frente, tras, esquerda, direita) ou 'sair' para encerrar: ");
        scanf("%s", comando);

        if (strcmp(comando, "frente") == 0) {
            printf("Movendo para frente.\n");
        } else if (strcmp(comando, "tras") == 0) {
            printf("Movendo para tr�s.\n");
        } else if (strcmp(comando, "esquerda") == 0) {
            printf("Movendo para a esquerda.\n");
        } else if (strcmp(comando, "direita") == 0) {
            printf("Movendo para a direita.\n");
        } else if (strcmp(comando, "sair") != 0) {
            printf("Comando inv�lido.\n");
        }
    } while (strcmp(comando, "sair") != 0);

    printf("Programa encerrado.\n");
    return 0;
}
