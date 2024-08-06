#include <stdio.h> 

int main() {
    double metros;

    printf("Digite o Valor em Metros: ");
    scanf("%lf", &metros);

    double pes = metros * 3.28084;

    printf("O Valor em Pes e %.2f\n", pes);

    return 0;
}