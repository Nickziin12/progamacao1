#include <stdio.h>
#include <math.h>

int main() {
    double raio, volume;

    printf("Digite o raio da esfera em metros: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * M_PI * pow(raio, 3);

    printf("O volume da esfera e: %.2f metros cubicos.\n", volume);

    return 0;
}
