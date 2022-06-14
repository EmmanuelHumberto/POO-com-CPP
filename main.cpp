#include "Conta.cpp"


int main(){
 Conta umaConta;

umaConta.editarNomeTitular("Emmanuel");
umaConta.editaCpf("123.446.741.56");
umaConta.editaNumeroDaConta("12354");
std::cout << " O saldo da conta é: " <<  umaConta.obtemSaldo() <<  std::endl;
std::cout << " Nome titular: " << umaConta.obtemNomeTitular() <<  std::endl;
std::cout << " O numero da conta é: " <<  umaConta.obtemNumeroDaConta() <<  std::endl;
std::cout << " O numero do CPF é: " <<  umaConta.obetemCpf() <<  std::endl;

 return 0;
}