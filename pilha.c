#include <stdlib.h>
#include <stdio.h>

// Estrutura da pilha
// Cada nó da pilha contém um valor inteiro e um ponteiro para o próximo nó
struct Pilha{ 
    int valor; // Valor armazenad o no nó
    struct Pilha *proximo; // Ponteiro para o próximo nó
};

void inserir(struct Pilha ** topo, int new_valor){
    struct Pilha* novo = malloc(sizeof(struct Pilha));   // Aloca memória para o novo nó
    novo->valor = new_valor;  // Armazena o novo valor no nó
    novo->proximo = *topo;    // Faz o novo nó apontar para o nó atual do topo
    *topo = novo;             // Atualiza o topo para ser o novo nó
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