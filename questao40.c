#include <stdio.h>
#include <math.h>

int main() {
    
    float altura, raio;
    float volume;
    const float PI = 3.14159;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    volume = PI * pow(raio, 2) * altura;

    printf("O volume do cilindro e: %.2f\n", volume);

    return 0;
}
