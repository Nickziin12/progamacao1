#include <stdio.h>
#include <math.h>

int main() {
    
    float valor_presente, taxa_juros;
    int periodos;
    float valor_futuro;

    printf("Digite o valor presente do investimento: ");
    scanf("%f", &valor_presente);

    printf("Digite a taxa de juros (em porcentagem): ");
    scanf("%f", &taxa_juros);

    printf("Digite o numero de períodos: ");
    scanf("%d", &periodos);
 
    valor_futuro = valor_presente * pow((1 + taxa_juros / 100), periodos);

    printf("O valor futuro do investimento e: %.2f\n", valor_futuro);

    return 0;
}
