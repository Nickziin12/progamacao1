#include <stdio.h>

int main() {
    int num1, num2, num3;
    float media; 

    printf("Digite o Primeiro Numero Inteiro: ");
    scanf("%d", &num1); 

    printf("Digite o Segundo Numero Inteiro: ");
    scanf("%d", &num2);

    printf("Digite o Terceiro Numero Inteiro: ");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3.0;

    printf("A Media Aritimetica Dos Numeros %d, %d e %d e %.2f.\n", num1, num2, num3, media);

    return 0;
}