#include "Conta.hpp"
#include <iostream>
#include "Titular.hpp"

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numeroDaConta, Titular titular):
    numeroDaConta(numeroDaConta),
    titular(titular),
    saldo(0)
{
    numeroDeContas++;
}
Conta::~Conta(){

    numeroDeContas--;
}
void Conta::sacar( float valorASacar ) {
    if(valorASacar < 0 ) {
        std::cout << "Valor negativo não pode ser sacado!" << std::endl;
        return;
    }
    else if( valorASacar > saldo ){
        std::cout << "Saldo insuficiente!" << std::endl;
        return;
    } else {
        saldo -= valorASacar;
        std::cout << "Saque realizado com sucesso" << std::endl;
    }
}
void Conta::depositar( float valorADepositar ) {
    if( valorADepositar <= 0 ) {
        std::cout << "Depositado não realizado!" << std::endl;
        return;
    } else {
        saldo += valorADepositar;
        std::cout << "Deposito realizado com sucesso" << std::endl;
    }
}
std::string Conta::obtemNumeroDaConta() const {
    return numeroDaConta;
}

float Conta::obtemSaldo() const {
    return saldo;
}
int Conta::obtemNumeroDeContas() {
    return numeroDeContas;
}
