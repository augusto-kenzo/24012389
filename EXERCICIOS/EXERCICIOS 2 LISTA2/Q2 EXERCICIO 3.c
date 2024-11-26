#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\nSelecione uma ação para o robô:\n");
        printf("1 - Ligar uma lâmpada\n");
        printf("2 - Tocar um som\n");
        printf("3 - Mover o braço\n");
        printf("0 - Encerrar o programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Lâmpada ligada.\n");
                break;
            case 2:
                printf("Som tocando.\n");
                break;
            case 3:
                printf("Braço movendo.\n");
                break;
            case 0:
                printf("Encerrando programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
