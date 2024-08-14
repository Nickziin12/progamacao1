#include <stdio.h>

int main() {
    
    int num_lados;
    float lado;
    float perimetro;

    printf("Digite o numero de lados do poligono: ");
    scanf("%d", &num_lados);

    
    printf("Digite a medida de um lado do poligono: ");
    scanf("%f", &lado);

    perimetro = num_lados * lado;

    printf("O perimetro do poligono e: %.2f\n", perimetro);

    return 0;
}
