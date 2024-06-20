#include "Usuario.hpp"

Usuario::Usuario() : nome(""), email(""), idade(0), sexo(' '), login(""), senha("") {}

Usuario::Usuario(const std::string& nome, const std::string& email, int idade, char sexo, const std::string& login, const std::string& senha)
    : nome(nome), email(email), idade(idade), sexo(sexo), login(login), senha(senha) {}

std::string Usuario::getNome() const { return nome; }
std::string Usuario::getEmail() const { return email; }
int Usuario::getIdade() const { return idade; }
char Usuario::getSexo() const { return sexo; }
std::string Usuario::getLogin() const { return login; }
std::string Usuario::getSenha() const { return senha; }
