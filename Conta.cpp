#include "Conta.hpp"
#include <iostream>

void Conta::sacar(float valorASacar ) {
    if(valorASacar < 0 ) {
        std::cout << "Valor negativo não pode ser sacado!" << std::endl;
        return;
    }
    else if(valorASacar > saldo ){
        std::cout << "Saldo insuficiente!" << std::endl;
        return;
    }else{
        saldo -= valorASacar;
        std::cout << "Saque realizado com sucesso" << std::endl;
    }
}
void Conta::depositar(float valorADepositar ) {
    if(valorADepositar <= 0 ) {
        std::cout << "Depositado não realizado!" << std::endl;
        return;
    }else{
        saldo += valorADepositar;
        std::cout << "Deposito realizado com sucesso" << std::endl;
    }
}
float Conta::obtemSaldo() {
    return  saldo;
}
void Conta::editarNomeTitular(std::string nome) {
    titular = nome;
}
void Conta::editaNumeroDaConta(std::string numero) {
    numeroDaConta = numero;
}
void Conta::editaCpf(std::string cpf) {
    numCpf = cpf;
}
std::string Conta::obtemNomeTitular() {
    return titular;
}
std::string Conta::obetemCpf() {
    return numCpf;
}
std::string Conta::obtemNumeroDaConta() {
    return numeroDaConta;
}