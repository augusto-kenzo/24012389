 #include <stdio.h>

int main() {
    int passos, totalPassos = 0;
    const int meta = 10000;

    printf("Meta diária de passos: %d passos\n", meta);

    do {
        printf("Digite o número de passos dados: ");
        scanf("%d", &passos);

        if (passos < 0) {
            printf("Número de passos inválido. Tente novamente.\n");
        } else {
            totalPassos += passos;
            printf("Total de passos até agora: %d\n", totalPassos);
        }

        if (totalPassos >= meta) {
            printf("Parabéns! Você alcançou a meta diária de %d passos!\n", meta);
        }

    } while (totalPassos < meta);

    return 0;
}
