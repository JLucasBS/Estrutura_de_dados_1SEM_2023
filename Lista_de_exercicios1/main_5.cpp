#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char sobrenome[100];
    char nomeCompleto[200];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    if (strcmp(nome, sobrenome) > 0) {
        strcpy(nomeCompleto, nome);
        strcat(nomeCompleto, " ");
        strcat(nomeCompleto, sobrenome);
        printf("%s\n", nomeCompleto);
    } else if (strcmp(nome, sobrenome) < 0) {
        strcpy(nomeCompleto, sobrenome);
        strcat(nomeCompleto, " ");
        strcat(nomeCompleto, nome);
        printf("%s\n", nomeCompleto);
    } else {
        strcpy(nomeCompleto, nome);
        strcat(nomeCompleto, " ");
        strcat(nomeCompleto, sobrenome);
        printf("Nome e sobrenome são iguais.\n");
        printf("Nome completo: %s\n", nomeCompleto);
        printf("Tamanho do nome completo: %ld\n", strlen(nomeCompleto));
    }

    return 0;
}
