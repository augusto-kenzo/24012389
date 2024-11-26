 #include <stdio.h>

int main() {
    float deposito;
    const float minimo = 500.0;

    do {
        printf("Digite o valor do dep�sito inicial (m�nimo de R$%.2f): ", minimo);
        scanf("%f", &deposito);

        if (deposito < minimo) {
            printf("Erro: O valor inserido � inferior a R$%.2f. Tente novamente.\n", minimo);
        } else {
            printf("Dep�sito v�lido! Conta aberta com sucesso.\n");
        }

    } while (deposito < minimo);

    return 0;
}
