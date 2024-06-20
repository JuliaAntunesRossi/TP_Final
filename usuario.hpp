#ifndef USUARIO_HPP
#define USUARIO_HPP

#include <string>

class Usuario {
public:
    Usuario(); // Construtor padrão
    Usuario(const std::string& nome, const std::string& email, int idade, char sexo, const std::string& login, const std::string& senha);

    // Métodos de acesso
    std::string getNome() const;
    std::string getEmail() const;
    int getIdade() const;
    char getSexo() const;
    std::string getLogin() const;
    std::string getSenha() const;

protected:
    std::string nome;
    std::string email;
    int idade;
    char sexo;
    std::string login;
    std::string senha;
};

#endif
