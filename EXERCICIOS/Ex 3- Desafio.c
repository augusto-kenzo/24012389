#include <stdio.h>

int main(){

int vi1, vi2, vi3;

printf("Acoes disponiveis: \nAcao 1: 24,13/unidade. \nAcao 2: 11/unidade. \nAcao 3: 18,65/unidade.\n");

printf("Digite o valor que deseja investir na acao 1: \n");
scanf("%d", &vi1);

printf("Digite o valor que deseja investir na acao 2: \n");
scanf("%d", &vi2);

printf("Digite o valor que deseja investir na acao 3: \n");
scanf("%d", &vi3);

int u1, u2, u3;

u1 = vi1/24.13;
u2 = vi2/11;
u3 = vi3/18.65;

printf("Voce vai comprar %d de unidades da acao 1, %d de unidades da acao 2, %d de unidades da acao 3.", u1, u2, u3);

float dv1, dv2, dv3;

dv1 = (17/24.13)*100;
dv2 = (35/11)*100;
dv3 = (25/38.65)*100;

printf("\nO dividend yield de que acao eh: \nAcao 1; %.2f,\nAcao2: %.2f,\nAcao3: %.2f", dv1, dv2, dv3);

return 0;

}
