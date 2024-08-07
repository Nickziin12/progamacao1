#include <stdio.h>
#include <math.h>

int main () {
    double principal, taxa, tempo, montante; 

    printf("Digite o Valor Inicial do Investimento: ");
    scanf("%lf", &principal); 

    printf("Digite a Taxa de Juros Anual (Em Porcentagem): ");
    scanf("%lf", &taxa);

    printf("Digite o Tempo de Investimento em Anos: ");
    scanf("%lf", &tempo); 

    montante = principal * pow((1 + taxa / 100), tempo); 

    printf("O montante final apos %.2f anos e: %.2f\n", tempo, montante); 

    return 0;
}