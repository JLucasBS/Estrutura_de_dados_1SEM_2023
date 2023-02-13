#include <stdio.h>
#include <stdbool.h>

void verificar_numero(int num) {
    bool e_par = num % 2 == 0;
    bool e_primo = true;
    
    if (e_par) {
        printf("O número %d é par\n", num);
        return;
    }
    
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            e_primo = false;
            break;
        }
    }
    
    if (e_primo) {
        printf("O número %d é primo\n", num);
    } else {
        printf("O número %d é impar\n", num);
    }
}

int main() {
    int num;
    
    printf("Informe um número inteiro: ");
    scanf("%d", &num);
    
    verificar_numero(num);
    
    return 0;
}
