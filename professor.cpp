#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>
#include "Usuario.hpp"

class Professor : public Usuario {
public:
    Professor(const std::string& nome, const std::string& email, int idade, char sexo, const std::string& areaAtuacao);

    // Métodos de acesso
    std::string getAreaAtuacao() const;
    void gerarLoginSenhaAutomaticos(); // Método para gerar login e senha automaticamente

private:
    std::string areaAtuacao;
};

#endif
