#include <stdio.h>

void ordenarCrescente(int vetor[], int tamanho) {
    int i, j, aux;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

void ordenarDecrescente(int vetor[], int tamanho) {
    int i, j, aux;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] < vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    int vetor[10], tamanho = 10, opcao, i;
    char resposta[3];

    printf("Digite 10 valores inteiros: \n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Deseja ordenar o vetor em ordem crescente (C) ou decrescente (D)? ");
    scanf("%s", resposta);

    if (resposta[0] == 'C' || resposta[0] == 'c') {
        ordenarCrescente(vetor, tamanho);
    } else if (resposta[0] == 'D' || resposta[0] == 'd') {
        ordenarDecrescente(vetor, tamanho);
    } else {
        printf("Resposta inválida\n");
        return 0;
    }

    printf("Vetor ordenado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
