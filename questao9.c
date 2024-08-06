#include <stdio.h>

int main() {
    double fahrenheit;

    printf("Digite a Temperatura em Graus Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    double celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("A Temperatura em Celsius e %.2f\n", celsius);

    return 0;
}