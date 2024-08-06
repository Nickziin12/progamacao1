#include <stdio.h>

int main() {

    double celsius; 

    printf("Digite a Temperatura em Graus Celsius: ");
    scanf("%lf", &celsius); 

    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    printf("A Temperatura em Fahrenheit e %.2f\n", fahrenheit);

    return 0; 
}