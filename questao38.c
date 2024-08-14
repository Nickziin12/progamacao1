#include <stdio.h>

int main() {
    
    float preco, desconto;
    float preco_final;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a porcentagem de desconto oferecido: ");
    scanf("%f", &desconto);

    preco_final = preco * (1 - desconto / 100);

    printf("O preco final apos o desconto e: %.2f\n", preco_final);

    return 0;
}
