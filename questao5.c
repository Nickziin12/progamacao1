#include <stdio.h>

int main() {
    float base, altura, area; 

    printf("Digite a Base do Triangulo: ");
    scanf("%f", &base);

    printf(" Digite a Altura do Triangulo: "); 
    scanf("%f", &altura);

    area = (base * altura ) / 2.0;

    printf("A area do Triangulo com base %.2f e altura %.2f e %.2f \n", base, altura, area);

    return 0;
}