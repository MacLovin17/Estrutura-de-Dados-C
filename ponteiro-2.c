#include <stdlib.h>
#include <stdio.h>


int main(void){
    int x= 10;
    int *ponteiro = &x; // Armazena o valor que esta no endereço de memória de X no ponteiro
    x=30;
     

    printf("X= %d Ponteiro= %d\n", x,*ponteiro);
    return 0;
}