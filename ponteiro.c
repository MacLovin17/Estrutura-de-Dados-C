#include <stdlib.h>
#include <stdio.h>

int main(void){
    int x = 10; // Declaro minha variavel X que gera um consumo de memória
    int *ponteiro; // Declaro meu ponteiro do tipo inteiro
    ponteiro = &x; // O ponteiro recebe o endereço de memória da variável X

    printf("Valor de x = %d\n", x);
    printf("Endereco de x = %d\n", ponteiro); // Informo o endereço de memória, caso queira mostrar o valor basta colocar (*) = *ponteiro
    printf("Endereco de x = %d\n", &x);

    return 0;
}