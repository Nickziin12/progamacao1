#include <stdio.h>
#include <math.h>

int main() {
    double cateto1, cateto2, hipotenusa; 

    printf("Digite o Comprimento do Primeiro Cateto: ");
    scanf("%lf", &cateto1);

    printf("Digite o Comprimento do Segundo Cateto: ");
    scanf("%lf", &cateto2); 

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    printf("O Comprimento da Hipotenusa e %.2f\n", hipotenusa);

    return 0;
}