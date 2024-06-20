#include "Aluno.hpp"

#include <iostream>

Aluno::Aluno() : Usuario(), sobrenome("") {}

Aluno::Aluno(const std::string& nome, const std::string& sobrenome, const std::string& email, int idade, char sexo, const std::string& login, const std::string& senha)
    : Usuario(nome, email, idade, sexo, login, senha), sobrenome(sobrenome) {}

std::string Aluno::getSobrenome() const { return sobrenome; }

