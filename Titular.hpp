#pragma once
#include <iostream>

class Titular{
private:
    std::string nome;
    std::string cpf;
public:
    Titular(std::string nome, std::string cpf);
    std::string obtemNomeTitular() const;
    std::string obetemCpf() const;

private:
    void verificaTamanhoDoNome();
};
