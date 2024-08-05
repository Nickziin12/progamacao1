#include <stdio.h>

int main() {
    int num1, num2, produto;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    produto = num1 * num2;

    printf("O produto de %d e %d e %d.\n", num1, num2, produto);

    return 0;
}
