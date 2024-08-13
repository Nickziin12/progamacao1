#include <stdio.h>
#include <math.h> 

int main() {
    double raio, altura, volume;

    printf("Digite o raio da base do cone em metros: ");
    scanf("%lf", &raio);

    printf("Digite a altura do cone em metros:  ");
    scanf("%lf", &altura);
    
    volume = (1.0 / 3.0) * M_PI * pow(raio, 2) * altura; 

    printf("O volume do cone e: %.2f metros cubicos.\n", volume);

    return 0;
}
