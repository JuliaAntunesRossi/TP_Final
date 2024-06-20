#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <iostream>
#include <string>
#include "Usuario.hpp"

class Aluno : public Usuario {
public:
    Aluno(); // Construtor padrão
    Aluno(const std::string& nome, const std::string& sobrenome, const std::string& email, int idade, char sexo, const std::string& login, const std::string& senha);

    // Métodos de acesso
    std::string getSobrenome() const;

private:
    std::string sobrenome;
};

#endif 
