#include <stdio.h>

long long fibonacci(int n) {
    long long first = 1;
    long long second = 1;
    long long next;
    int i;

    if (n <= 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        for (i = 3; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
        }

        return next;
    }
    }

    int main() {
    int termo;
    printf("Digite o termo da série de Fibonacci que deseja obter o valor: ");
    scanf("%d", &termo);

    printf("O valor do %dº termo na série de Fibonacci é %lld\n", termo, fibonacci(termo));

    return 0;
}
