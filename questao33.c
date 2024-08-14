#include <stdio.h>

int main() {
    
    float valor_inicial, valor_residual;
    int vida_util;
    float depreciacao_anual;

    printf("Digite o valor inicial do bem: ");
    scanf("%f", &valor_inicial);
    
    printf("Digite o valor residual do bem: ");
    scanf("%f", &valor_residual);
    
    printf("Digite a vida util do bem em anos: ");
    scanf("%d", &vida_util);

    depreciacao_anual = (valor_inicial - valor_residual) / vida_util;

    printf("A depreciação anual e: %.2f\n", depreciacao_anual);

    return 0;
}
