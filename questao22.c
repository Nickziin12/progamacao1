#include <stdio.h>

int main() {
   
   double milhas, quilometros;
    
    printf("Digite o valor em milhas: ");
    scanf("%lf", &milhas);
    
   quilometros = milhas / 0.621371;
    
    printf("%.2f milhas equivalem a %.2f quilometros.\n", milhas, quilometros);
    
    return 0;
}

