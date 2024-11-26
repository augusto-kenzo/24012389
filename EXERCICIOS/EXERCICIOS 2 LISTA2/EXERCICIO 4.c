 #include <stdio.h>

int main() {
    float deposito;
    const float minimo = 500.0;

    do {
        printf("Digite o valor do depósito inicial (mínimo de R$%.2f): ", minimo);
        scanf("%f", &deposito);

        if (deposito < minimo) {
            printf("Erro: O valor inserido é inferior a R$%.2f. Tente novamente.\n", minimo);
        } else {
            printf("Depósito válido! Conta aberta com sucesso.\n");
        }

    } while (deposito < minimo);

    return 0;
}
