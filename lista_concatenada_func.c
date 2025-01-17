#include <stdlib.h>
#include <stdio.h>

struct Lista{
    int valor;
    struct Lista *proximo; // Aponta para a próxima estrutura. No caso iremos construir 3 structs.
};

struct Lista *busca(struct Lista* pLista, int teste){
    while(pLista){
        if(pLista->valor == teste){ //Se o pLista(endereço de memória) apontando para valor, for igual ao teste do parametro.
            return (pLista); // Retorna o enderço de memória.
        }
        else{
            pLista = pLista->proximo;
        }
    }
    return NULL;
}

int main(void){
    struct Lista m1,m2,m3;
    struct Lista *resultado,*gancho = &m1; // Aqui armazeno o endereço de memória de m1 no ponteiro *gancho.
    int num;

    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = NULL;

    printf("Informe um valor\n");
    scanf("%d", &num);

    resultado = busca(gancho, num);
    
    if(resultado)
        printf("Numero encontrado %d", resultado->valor);
    else
        printf("Numero nao encontrado");
    
    return 0;
}