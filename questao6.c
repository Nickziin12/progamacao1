#include <stdio.h>
#include <math.h>

int main() {
    float raio, area;
    const float PI = M_PI;

    printf("Digite o Raio do Circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A area do circulo com raio %.2f e %.2f \n", raio, area);

    return 0;
} 