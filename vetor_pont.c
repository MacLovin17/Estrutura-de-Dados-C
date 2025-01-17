#include <stdlib.h>
#include <stdio.h>

int main() {
    int num = 0; // Inicializa a variável num com 0
    for (int i = 0; i <= 10; i++) { // Itera 10 vezes
        printf("%d ", num); // Imprime o valor atual de num
        num++; // Incrementa num a cada iteração
    }
    printf("\n"); // Quebra de linha após o loop

    return 0;
}
