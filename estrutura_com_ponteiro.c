#include <stdlib.h>
#include <stdio.h>

typedef struct horario{
    int *pHora; // Declaração dos ponteiros dentro da estrutura
    int *pMinuto;
    int *pSegundo;
}Horas;

int main(void){

    Horas hoje; //Chamo minha estrutura

    int hora = 14;
    int minuto = 50;
    int segundo = 37;

    hoje.pHora = &hora;  // Armazeno o endereço da variavel hora no ponteiro pHora
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    printf("%d:%d:%d\n", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo); // Verifico o valor dentro do endereço de memória através do (*)

    return 0;
}