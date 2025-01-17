#include <stdlib.h>
#include <stdio.h>

struct Lista{
    int valor;
    struct Lista *proximo; // Aponta para a próxima estrutura. No caso iremos construir 3 structs.
};

int main(void){
    struct Lista m1,m2,m3;
    struct Lista* gancho = &m1; // Aqui armazeno o endereço de memória de m1 no ponteiro *gancho.
    
    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = NULL;

    while(gancho != NULL){
        printf("%d -> ", gancho->valor);
        gancho = gancho->proximo;
    }

    return 0;
}