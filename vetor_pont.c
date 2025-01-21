#include <stdlib.h>
#include <stdio.h>

struct NOH{
    int valor;
    struct NOH* proximo;
};

void inserir(struct NOH** fila, int novo_valor){
    struct NOH* novo = malloc(sizeof(struct NOH));
    novo -> valor = novo_valor;
    novo -> proximo = NULL;

    if(*fila == NULL){
        *fila = novo;
        return;
    }
    struct NOH* aux = *fila;

    while(aux->proximo)
        aux = aux->proximo;
    
    aux -> proximo = novo;
}

void print(struct NOH* fila){
    while(fila){
        printf("%d -> ", fila->valor);
        fila = fila->proximo;
    }
    printf("NULL\n");
}

int remover(struct NOH** fila){
    struct NOH* remover = *fila;
    *fila = remover->proximo;

    return (remover -> valor);
}

int main(){
    struct NOH* no = NULL;
    
    for (size_t i = 0; i <= 7; i++){
        inserir(&no, i);
    }
    
    print(no);
    
    for (size_t i = 0; i <= 7; i++){
        printf("Removendo %d\n", remover(&no));
        print(no);
    }

    return 0;
}