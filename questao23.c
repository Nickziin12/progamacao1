#include <stdio.h>

int main() {
    double massa, velocidade, energia_cinetica;
    
    
    printf("Digite a massa do objeto em kg: ");
    scanf("%lf", &massa);
    
    printf("Digite a velocidade do objeto em m/s: ");
   scanf("%lf", &velocidade);
    
    energia_cinetica = (massa * velocidade * velocidade) / 2;
    
    printf("A energia cinetica do objeto e: %.2f Joules.\n", energia_cinetica);
    
    return 0;
}



