#include <stdio.h>

int main() {
    double forca, area, pressao;

     printf("Digite a Forca Aplicada (Em Newtons): ");
    scanf("%lf", &forca);

    printf("Digite a Area (Em Metros Quadrados): ");
    scanf("%lf", &area);

     if (area <= 0) {
        printf("ERRO: A Area Deve Ser Maior Que Zero.\n"); 
    } else {
    
        pressao = forca / area;

        printf("A Pressao e: %.2f pascals (Pa).\n", pressao);
    }

    return 0;
}
