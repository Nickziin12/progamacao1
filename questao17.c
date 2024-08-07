#include <stdio.h>

int main() {
    
    double massa, volume, densidade;
    
    printf("Digite a massa do objeto (em kg): ");
    scanf("%lf", &massa);
    
    printf("Digite o volume do objeto (em metro cubico): ");
    scanf("%lf", &volume);
    
    if (volume == 0) 
    
    printf("Erro: O volume nao pode ser zero.\n");
    
         densidade = massa / volume;
      
        printf("A densidade do objeto e: %.2f kg/metro cubico\n", densidade);

    return 0;
}
