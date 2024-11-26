 #include <stdio.h>

int main() {
    int passos, totalPassos = 0;
    const int meta = 10000;

    printf("Meta di�ria de passos: %d passos\n", meta);

    do {
        printf("Digite o n�mero de passos dados: ");
        scanf("%d", &passos);

        if (passos < 0) {
            printf("N�mero de passos inv�lido. Tente novamente.\n");
        } else {
            totalPassos += passos;
            printf("Total de passos at� agora: %d\n", totalPassos);
        }

        if (totalPassos >= meta) {
            printf("Parab�ns! Voc� alcan�ou a meta di�ria de %d passos!\n", meta);
        }

    } while (totalPassos < meta);

    return 0;
}
