#include <stdlib.h>
#include <stdio.h>

struct horario{
    int hora;
    int minuto;
    int segundo;
};

int main(void){

    struct horario agora, *depois;
    depois = &agora;

    //Primeira Maneiro
    (*depois).hora = 10;
    (*depois).minuto = 30;
    (*depois).segundo = 50;
    //Segunda Maneira
    depois->hora =10;
    depois->minuto=30;
    depois->segundo=59;



    printf("\t%d: %d: %d\n", agora.hora, agora.minuto, agora.segundo);

    /*
        Compiladores leem o código com preferência como em uma equação matemática.
            Ex: 
                8+7*9+77-48*0
                Para resolver iremos separar por parenteses:
                    8+(7*9)+77-(48*0)
                    8+63+77-0
                    148
        Da mesma maneira fazemos com ponteiro à estrutura:
            No struct NOH usaríamos
                NOH.dado para acessar o dado contudo para fazer isso com ponteiro devemos usar parenteses para mostrar qual prioridade para o compilador
                (*PONT).dado
    */



    return 0;
}