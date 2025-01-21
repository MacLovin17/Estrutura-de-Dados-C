#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *file; // Ponteiro para o tipo FILE

    file = fopen("Arquivo.txt", "w"); // Abrimos um arquivo .txt no modo de escrita Write
    fprintf(file,"Cerveja seria a melhor bebida.\n"); // Gravmos uma menssagem no arquivo.
    fprintf(file,"Se não existisse café.\n"); // Gravmos uma menssagem no arquivo.
    fclose(file); // Fechamos e salvamos o arquivo

}