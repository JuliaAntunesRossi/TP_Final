#include <cstdlib> // Para usar funções rand() e srand()
#include <ctime>   // Para usar a função time()
#include "Professor.hpp"

Professor::Professor(const std::string& nome, const std::string& email, int idade, char sexo, const std::string& areaAtuacao)
    : Usuario(nome, email, idade, sexo, "", ""), areaAtuacao(areaAtuacao) {}

std::string Professor::getAreaAtuacao() const { return areaAtuacao; }

void Professor::gerarLoginSenhaAutomaticos() {
    // Lógica para gerar login e senha (exemplo simples)
    srand(static_cast<unsigned>(time(0)));
    login = "prof" + std::to_string(rand() % 1000);
    senha = "senha" + std::to_string(rand() % 1000);
}
