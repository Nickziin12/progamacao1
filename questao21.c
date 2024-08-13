#include <stdio.h>

int main() {
    double quilometros, milhas;

    printf("Digite o Valor em Quilometros: ");
    
    scanf("%lf", &quilometros);

    milhas = quilometros * 0.621371;

     printf("%.2f Quilometros Equivalem a %.2f Milhas.\n", quilometros, milhas);

    return 0;
}
