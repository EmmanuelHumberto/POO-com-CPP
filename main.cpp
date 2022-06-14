#include "Conta.cpp"
#include "Titular.cpp"
#include <string>
#include <iostream>

int main(){

Conta duasconta("1234", Titular("Emmanuel", "123.456.798-78"));

Titular cliente ("Humberto", "123.456.798-88");
Conta umaconta("1274", cliente);

umaconta.depositar(5000);
umaconta.sacar(1500);

std::cout << "Cpf titular: " << cliente.obetemCpf() << std::endl;
std::cout << "Nome titular: " << cliente.obtemNomeTitular() << std::endl;
std::cout << "Nunero da conta: " << umaconta.obtemNumeroDaConta() << std::endl;
std::cout << "Saldo da conta: "  << umaconta.obtemSaldo() <<std::endl;

 return 0;
}