#include <stdlib.h>
#include <stdio.h>

void teste_variavel(int x){
    ++x; // Cria uma cópia da variável teste alocando outro endereço de memória.
}

void teste_point(int *pX){
    ++*pX; // Enquanto esse incrementa +1 no dado de endereço de memória
}

int main(void){
    int teste = 10;
    int *pTeste = &teste;

    teste_variavel(teste); 
    teste_point(pTeste);

    printf("%d \n", teste);

    return 0;
}