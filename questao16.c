#include <stdio.h>

int main() {
    double minutos, segundos;

    printf("Digite o valor em minutos: ");
    scanf("%lf", &minutos);

    segundos = minutos * 60;

    printf("%.2f minutos correspondem a %.2f segundos.\n", minutos, segundos);

    return 0;
}

