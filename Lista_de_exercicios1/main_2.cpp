#include <iostream>
#include <vector>

std::vector<double> atualizar_precos(std::vector<double> precos, double inflacao) {
    std::vector<double> novos_precos;
    for (double preco : precos) {
        double novo_preco = preco + (preco * inflacao / 100);
        novos_precos.push_back(novo_preco);
    }
    return novos_precos;
}

int main() {
    int tamanho = 10;
    double valor_inicial = 10.0;
    double incremento = 10.0;
    double inflacao = 15.0;

    std::vector<double> precos;
    for (int i = 0; i < tamanho; i++) {
        precos.push_back(valor_inicial + i * incremento);
    }

    std::vector<double> novos_precos = atualizar_precos(precos, inflacao);

    for (int i = 0; i < novos_precos.size(); i++) {
        std::cout << "Novo preço para o produto " << i + 1 << ": " << novos_precos[i] << std::endl;
    }
    return 0;
}
