#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\nSelecione uma a��o para o rob�:\n");
        printf("1 - Ligar uma l�mpada\n");
        printf("2 - Tocar um som\n");
        printf("3 - Mover o bra�o\n");
        printf("0 - Encerrar o programa\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("L�mpada ligada.\n");
                break;
            case 2:
                printf("Som tocando.\n");
                break;
            case 3:
                printf("Bra�o movendo.\n");
                break;
            case 0:
                printf("Encerrando programa...\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
