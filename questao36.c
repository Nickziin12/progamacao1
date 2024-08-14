#include <stdio.h>
#include <math.h> 
int main() {
    
    float taxa_nominal;
    int periodos_por_ano;
    float taxa_efetiva;

    printf("Digite a taxa de juros nominal (em porcentagem): ");
    scanf("%f", &taxa_nominal);

    printf("Digite o numero de periodos por ano: ");
    scanf("%d", &periodos_por_ano);

    taxa_efetiva = pow((1 + taxa_nominal / 100 / periodos_por_ano), periodos_por_ano) - 1;

    taxa_efetiva *= 100;

    printf("A taxa de juros efetiva anual e: %.2f%%\n", taxa_efetiva);

    return 0;
}
