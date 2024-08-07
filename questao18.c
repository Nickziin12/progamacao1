#include <stdio.h>

int main() {
    double peso, altura, imc;

    printf("Digite Seu Peso em Quilogramas: ");
    scanf("%lf", &peso);

    printf("Digite Sua Altura em Metros: ");
    scanf("%lf", &altura);

    if (altura <= 0) {
        printf("ERRO: A Altura Nao Pode Ser Maior que zero.\n");
    } else {
        imc = peso / (altura * altura);

        printf("Seu Indice De Massa Corporal (IMC) E: %.2f\n", imc);
    }
    return 0;
}