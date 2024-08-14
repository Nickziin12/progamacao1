#include <stdio.h>
#include <math.h>  

int main() {
    
    float valor_futuro, taxa_juros;
    int periodos;
    float valor_presente;

    printf("Digite o valor futuro do investimento: ");
    scanf("%f", &valor_futuro);

    printf("Digite a taxa de juros (em porcentagem): ");
    scanf("%f", &taxa_juros);

    printf("Digite o número de periodos: ");
    scanf("%d", &periodos);

    valor_presente = valor_futuro / pow((1 + taxa_juros / 100), periodos);

    printf("O valor presente do investimento e: %.2f\n", valor_presente);

    return 0;
}
