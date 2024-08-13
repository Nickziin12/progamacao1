#include <stdio.h>

int main() {
    double massa, aceleracao, forca;
    printf("Digite a massa do objeto em kg: ");
    scanf("%lf", &massa);
    
    printf("Digite a aceleraçao do objeto em m/s²: ");
    scanf("%lf", &aceleracao);
    
    forca = massa * aceleracao;
    
    printf("A forca resultante e: %.2f Newtons.\n", forca);
    
    return 0;
}


