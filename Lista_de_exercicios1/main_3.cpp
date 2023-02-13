#include <iostream>

int main() {
    int tamanho = 10;
    int valor;
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        std::cout << "Digite o valor " << i + 1 << ": ";
        std::cin >> valor;
        soma += valor;
    }

    int media = soma / tamanho;
    std::cout << "A média dos valores é " << media << std::endl;

    for (int i = 0; i < tamanho; i++) {
        if (valor == media) {
            std::cout << "O valor " << valor << " é igual à média dos valores." << std::endl;
            break;
        }
    }

    return 0;
}
