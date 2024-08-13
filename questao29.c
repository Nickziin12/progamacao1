#include <stdio.h>
#include <math.h> 
int main() {
    double raio, altura, volume;

    printf("Digite o raio da base do cilindro em metros: ");
    scanf("%lf", &raio);

    printf("Digite a altura do cilindro em metros: ");
    scanf("%lf", &altura);

    volume = M_PI * pow(raio, 2) * altura; 

    printf("O volume do cilindro e: %.2f metros cubicos.\n", volume);

    return 0;
}
