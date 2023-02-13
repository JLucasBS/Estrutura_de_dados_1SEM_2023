#include <stdio.h>
#include <math.h>

float soma_quadrado(int valor1, int valor2, int valor3) {
  return (float) (3 * valor1) + pow(valor2, 2) + pow(valor3, 2);
}

/*Professor, nesse caso eu não entendi o enunciado, 
um momento pede para receber 4 valores porem utiliza-se apenas 3 (Triplo do primeiro valor + o quadrados dos outros valores, 
então estou utilizando apenas 3 variaveis, e não 4 como consta no enunciado)*/

int main() {
    int v1, v2, v3;
    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    printf("O resultado é %.2f\n", soma_quadrado(v1, v2, v3));

    return 0;
}
