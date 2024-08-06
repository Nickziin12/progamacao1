#include <stdio.h>
#include <math.h> 

int main() {
    double raio; 

    printf("Digite o Raio do Circulo: ");
    scanf("%lf", &raio);

    double perimetro = 2 * M_PI * raio; 

    printf("O Perimetro do Circulo com raio %.2f e %.2f\n", raio, perimetro);

return 0;
}