#include <iostream>
#include <string>
#include <algorithm>

int obterResposta() {
    std::string resposta;
    std::cout << "Digite 'SIM' ou 'NAO': ";
    std::cin >> resposta;

    // Converte a resposta para minúsculas
    std::transform(resposta.begin(), resposta.end(), resposta.begin(), ::tolower);

    // Verifica se a resposta é "sim" ou "nao"
    if (resposta == "sim") {
        return 1;
    } else if (resposta == "nao") {
        return 0;
    } else if (resposta == "não") {
        return 0;
    } else {
        std::cout << "Resposta inválida. Tente novamente." << std::endl;
        return obterResposta();
    }
}

int main() {
    int resultado = obterResposta();
    std::cout << "Resultado: " << resultado << std::endl;
    return 0;
}
