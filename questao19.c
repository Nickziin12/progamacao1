#include <stdio.h>

int main() {
    double distancia, tempo, velocidade; 

    printf("Digite a Distancia Percorrida (Em Metros): ");
    scanf("%lf", &distancia);

    printf("Digite o Tempo Gasto (em segundos): ");
    scanf("%lf", &tempo);

    if (tempo <= 0) {
        printf("ERRO: O Tempo Deve ser Maior Que Zero.\n");
    } else {
        velocidade = distancia / tempo; 

        printf("A Velocidade media e: %.2f metros por segundo.\n", velocidade); 
    }

    return 0;
}