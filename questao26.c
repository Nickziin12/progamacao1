#include <stdio.h>

int main() {
    double trabalho, tempo, potencia;
 
    printf("Digite o trabalho realizado em Joules: ");
    scanf("%lf", &trabalho);
    
    printf("Digite o tempo gasto em segundos: ");
    scanf("%lf", &tempo);
    
    printf("O tempo deve ser um valor positivo maior que zero.\n");
        
    potencia = trabalho / tempo;
    
    printf("A potencia e: %.2f Watts.\n", potencia);
    
    return 0;
}
