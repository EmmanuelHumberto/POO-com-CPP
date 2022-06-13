#include <iostream>
#include <string>

struct Conta{
    std::string numero;
    std::string cpf;
    std::string titular;
    float saldo;

    void depositar(float valorADepositar){
        if(valorADepositar <= 0 ) {
            std::cout << "Depositado não realizado!" << std::endl;
            return;
        }else{
            saldo += valorADepositar;
            std::cout << "Deposito realizado com sucesso" << std::endl;
        }
    }
    void sacar(float valorASacar){
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
};

int main(){
 Conta umaConta;
 umaConta.numero ="23";
 umaConta.cpf ="123.456.789-78";
 umaConta.saldo = 2000;
 umaConta.depositar( 10000);
 std::cout << " O saldo da conta é: " <<  umaConta.saldo <<  std::endl;
 return 0;
}