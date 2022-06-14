#pragma once
#include "iostream"

class Conta {
private:
    std::string numeroDaConta;
    std::string numCpf;
    std::string titular;
    float saldo;
public:
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float obtemSaldo();
    void editarNomeTitular(std::string nome);
    void editaNumeroDaConta(std::string numero);
    void editaCpf(std::string cpf);
    std::string obtemNomeTitular();
    std::string obetemCpf();
    std::string obtemNumeroDaConta();
};

