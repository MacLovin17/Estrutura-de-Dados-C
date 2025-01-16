#include <stdlib.h>
#include <stdio.h>

struct Fila{
    int valor;
    struct Fila *proximo;
};

void inserir(struct Fila ** topo, int new_valor){
   struct Fila* f = malloc(sizeof(struct Fila));
   f->valor = new_valor;
   f->proximo = NULL;
   
   if(*topo == NULL){
        *topo = f;
        return;
   }
    struct Fila* aux= *topo;

    while(aux->proximo)
        aux = aux->proximo;
    aux->proximo = f;
}

void print(struct Fila*  f){
    while(f){
        printf("[%d] -> ", f->valor);
        f = f->proximo;
    }
    printf("NULL\n");
}

int remover(struct Fila** p){
   struct Fila* clear = *p;
   *p = clear->proximo;

   return clear->valor;
}

int main(void){
    struct Fila* f = NULL;

    int i=0;

    while(i<=7){
        inserir(&f, i);
        i++;
    }
    while(i>=0){
        print(f);
        printf("Removendo %d\n", remover(&f));
        i--;
    }
    

    return 0;
}