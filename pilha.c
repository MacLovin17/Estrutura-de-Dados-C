#include <stdlib.h>
#include <stdio.h>

struct Pilha{
    int valor;
    struct Pilha *proximo;
};

void inserir(struct Pilha ** topo, int new_valor){
    struct Pilha* novo = malloc(sizeof(struct Pilha));
    novo->valor = new_valor;
    novo->proximo = *topo;
    *topo = novo;
}

void print(struct Pilha*  p){
    while(p){
        printf("[%d] -> ", p->valor);
        p = p->proximo;
    }
    printf("NULL\n");
}

int remover(struct Pilha** p){
    struct Pilha* clear = *p;
    *p = clear->proximo;

    return clear->valor;
}

int main(void){
    struct Pilha* p = NULL;

    int i=0;

    while(i<=7){
        inserir(&p, i);
        i++;
    }
    
    while(i>=0){
        print(p);
        printf("Removendo %d\n", remover(&p));
        i--;
    }

    return 0;
}