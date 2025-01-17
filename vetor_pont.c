#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro {
    char nome[50], telefone[14];
    int idade;
    float peso;
} cadastro;

int main(void) {
    int opc = 0;

    printf("(1) Escrita.\n(2) Leitura.\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opc);

    switch (opc) {
    case 1: {
        FILE *cad;
        cad = fopen("Arquivo.txt", "w");

        if (cad == NULL) {
            printf("Erro ao abrir o arquivo.\n");
            return -1;
        }

        cadastro c[3];

        for (size_t i = 0; i < 3; i++) {
            printf("Informe teu nome: ");
            getchar(); 
            fgets(c[i].nome, sizeof(c[i].nome), stdin);
            c[i].nome[strcspn(c[i].nome, "\n")] = '\0';

            printf("Informe teu telefone: ");
            fgets(c[i].telefone, sizeof(c[i].telefone), stdin);
            c[i].telefone[strcspn(c[i].telefone, "\n")] = '\0'; 

            printf("Informe tua idade: ");
            scanf("%d", &c[i].idade);

            printf("Informe teu peso: ");
            scanf("%f", &c[i].peso);
        }

        for (size_t i = 0; i < 3; i++) {
            fprintf(cad, "%s   ", c[i].nome);
            fprintf(cad, "%s   ", c[i].telefone);
            fprintf(cad, "%d   ", c[i].idade);
            fprintf(cad, "%.2f\n", c[i].peso);
        }

        fclose(cad);
        printf("Dados gravados com sucesso!\n");
        break;
    }

    case 2: {
        FILE *cad;
        cad = fopen("Arquivo.txt", "r");

        if (cad == NULL) {
            printf("Erro ao abrir arquivo.\n");
            return -1;
        }

        cadastro c[3];

        for (size_t i = 0; i < 3; i++) {
            fscanf(cad, "%s %s %d %f", c[i].nome, c[i].telefone, &c[i].idade, &c[i].peso);
            printf("\nCadastro %d\n", i + 1);
            printf("Nome: %s\n", c[i].nome);
            printf("Telefone: %s\n", c[i].telefone);
            printf("Idade: %d\n", c[i].idade);
            printf("Peso: %.2f\n", c[i].peso);
        }

        fclose(cad);
        break;
    }

    default:
        printf("Opcao invalida.\n");
        break;
    }
    return 0;
}
