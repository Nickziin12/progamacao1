#include <stdio.h>

int main() {
    
    float populacao_inicial, populacao_final;
    int anos;
    float taxa_crescimento;

    printf("Digite a populacao inicial: ");
    scanf("%f", &populacao_inicial);
    
    printf("Digite a populacao final: ");
    scanf("%f", &populacao_final);
    
    printf("Digite o numero de anos: ");
    scanf("%d", &anos);

    taxa_crescimento = ((populacao_final - populacao_inicial) / populacao_inicial) * 100 / anos;

    printf("A taxa de crescimento populacional e: %.2f%% ao ano\n", taxa_crescimento);

    return 0;
}
