#include <stdio.h>
#include <math.h> 

int main() {
    double aresta, volume;

    
    printf("Digite a aresta do cubo em metros: ");
    scanf("%lf", &aresta);

    volume = pow(aresta, 3); 

    printf("O volume do cubo e: %.2f metros cubicos.\n", volume);

    return 0;
}
