#include <stdlib.h>
#include <stdio.h>


void copiar_string(char *copiar, char *colar){
    while(*copiar != '\0'){
        *colar = *copiar;
        ++copiar;
        ++colar;
    }
    *colar = '\0';
}

int main(void){

    char txt1[]="Eriky Gomes";
    char txt2[20];
    
    copiar_string(txt1, txt2);

    printf("%s\n", txt2);
    return 0;
}