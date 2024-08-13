#include <stdio.h>

int main() {
    double forca, distancia, trabalho;

    printf("Digite a força aplicada em Newtons: ");
    scanf("%lf", &forca);
        
    
    printf("Digite a distancia percorrida em metros: ");
    scanf("%lf", &distancia); 
        
    trabalho = forca * distancia;
    
    printf("O trabalho realizado e: %.2f Joules.\n", trabalho);
    
    return 0;
}
