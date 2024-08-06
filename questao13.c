#include <stdio.h>

int main() {
    double principal, taxa, tempo, juros_simples; 

    printf("Digite o Valor Inicial do Investimento: ");
    scanf("%lf", &principal);

    printf("Digite a Taxa de Juros Anual (em percentual): ");
    scanf("%lf", &taxa);

    printf("Digite o Tempo de Investimento em Anos: ");
    scanf("%lf", &tempo);

    juros_simples = principal * (taxa / 100) * tempo;

    printf("O Montante de Juros Simples Acumulado ao final do periodo e %.2f\n", juros_simples);

    return 0;
}