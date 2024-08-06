#include <stdio.h>

int main () {
    double quilogramas; 

    printf("Digite o Valor em Quilogramas: "); 
    scanf("%lf", &quilogramas); 

    double libras = quilogramas * 2.20462;

    printf("O Valor em Libras e %.2f\n", libras);

    return 0;
}