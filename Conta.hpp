#pragma once
#include "iostream"

class Conta {
private:
    std::string numeroDaConta;
    std::string numCpf;
    std::string titular;
    float saldo;
public:
    Conta() = delete;
    Conta(std::string numeroDaConta, std::string numCpf, std::string titula);
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    std::string obtemNomeTitular() const;
    std::string obetemCpf() const;
    std::string obtemNumeroDaConta() const;
    float obtemSaldo() const;
};

