#include <stdio.h>

int main() {

    float diagonal_maior, diagonal_menor;
    float area;

    printf("Digite o valor da diagonal maior do losango: ");
    scanf("%f", &diagonal_maior);

    printf("Digite o valor da diagonal menor do losango: ");
    scanf("%f", &diagonal_menor);

    area = (diagonal_maior * diagonal_menor) / 2;

    printf("A área do losango e: %.2f\n", area);

    return 0;
}
