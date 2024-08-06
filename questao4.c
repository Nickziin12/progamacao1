#include <stdio.h>

int main() {
    float largura, altura, area;

    printf("Digite a Largura do Retangulo: ");
    scanf("%f", &largura);

    printf("Digite a altura do Retangulo: ");
    scanf("%f", &altura);

    area = largura * altura; 

    printf("A area do retangulo com largura %.2f e altura %.2f e %.2f \n", largura, altura, area);

    return 0;
}