#pragma once
#include "iostream"
#include "Titular.hpp"

class Conta {
private:
    static int numeroDeContas ;
    std::string numeroDaConta;
    Titular titular;
     float saldo;
public:
    Conta() = delete;
    Conta(std::string numeroDaConta, Titular titular);
    ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    std::string obtemNumeroDaConta() const;
    float obtemSaldo() const;
    static int obtemNumeroDeContas();

};

