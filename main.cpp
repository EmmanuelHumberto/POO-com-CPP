#include "Conta.cpp"


int main(){

Conta tresConta(
            "1213",
            "12346578978",
            "Daisy");

Conta duasConta(
            "1213",
            "12346578978",
            "Daisy");

Conta umaConta(
        "1213",
        "12346578978",
        "Daisy");

umaConta.depositar(1000);
umaConta.sacar(500);

std::cout << " O saldo da conta é: " <<  umaConta.obtemSaldo() <<  std::endl;
std::cout << " Nome titular: " << umaConta.obtemNomeTitular() <<  std::endl;
std::cout << " O numero da conta é: " <<  umaConta.obtemNumeroDaConta() <<  std::endl;
std::cout << " O numero do CPF é: " <<  umaConta.obetemCpf() <<  std::endl;
std::cout << " O numero de contas é: " << Conta::obtemNumeroDeContas() <<  std::endl;

 return 0;
}