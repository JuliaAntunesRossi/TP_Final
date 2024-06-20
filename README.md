# TP_Final

# README - TP_Final_PDSII

Este repositório contém códigos desenvolvidos para o Trabalho Final da disciplina Programação e Desenvolvimento de Software II (PDS2). Se trata de um sistema de gestão acadêmico de universidade como o SIGA ou o Moodle.

## Estrutura de Arquivos

- **códigos/**
  - **Turma/**
    - `Usuario.cpp`, `Usuario.hpp`: Implementação da classe `Usuario`.
    - `Professor.cpp`, `Professor.hpp`: Implementação da classe `Professor`.
    - `Aluno.cpp`, `Aluno.hpp`: Implementação da classe `Aluno`.
    - `Materia.cpp`, `Materia.hpp`: Implementação da classe `Materia`.
    - `Turma.cpp`, `Turma.hpp`: Implementação da classe `Turma`.
  - **Sistema/**
    - `Sistema.cpp`, `Sistema.hpp`: Implementação da classe `Sistema`.
  - **main.cpp**: Arquivo principal que contém a função `main`.

## Tópicos Explorados no Código

### Classes e Objetos

- As classes `Professor`, `Materia`, `Aluno`,`Usuario`, `Turma` e `Sistema` são implementadas em seus respectivos arquivos `.cpp` e `.hpp`, oferecendo estruturas e funcionalidades específicas para o gerenciamento de usuários, alunos, professores, matérias, turmas e sistema.

### Herança e Polimorfismo

- O projeto demonstra herança e polimorfismo.

### Encapsulamento

- Cada classe encapsula seus atributos e métodos, garantindo que apenas métodos específicos possam acessar e modificar dados internos.

### Associação

- A classe `Turma` é associada `Professor`, demonstrando uma associação entre turmas e professores.

### Tratamento de Exceção

- O código implementa tratamento de exceção em operações críticas, como inserção e remoção de professores em uma turma.

### Teste

- O arquivo `main.cpp` é utilizado para testar o comportamento das classes e funcionalidades implementadas no programa.

## Instruções de Compilação e Execução

Para compilar o programa:

**Compilação**:
   - Certifique-se de ter um compilador C++ instalado no seu sistema.
   - Navegue até o diretório `códigos/`.
   - Compile os arquivos `.cpp` juntos:
     ```
     g++ -o programa main.cpp sistema.cpp turma.cpp professor.cpp materia.cpp usuario.cpp -I.
     
     ```
