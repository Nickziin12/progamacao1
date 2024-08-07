#include <stdio.h>

int main() {
    double horas, minutos; 

    printf("Digite o Valor em Horas: ");
    scanf("%lf", &horas); 

    minutos = horas * 60;

    printf("%.2f horas correspondem a %.2f minutos.\n", horas, minutos);

    return 0;
}