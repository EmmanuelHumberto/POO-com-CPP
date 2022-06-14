#include "Titular.hpp"
#include <iostream>

Titular::Titular(std::string nome, std::string cpf):
nome(nome), cpf(cpf){
    verificaTamanhoDoNome();
}
std::string Titular::obtemNomeTitular() const {
    return nome;
}
std::string Titular::obetemCpf() const {
    return cpf;
}
void Titular::verificaTamanhoDoNome(){
    if(nome.size() < 5){
        std::cout <<"ERRO: Nome com menos de 5 letras "<< std::endl;
        exit(-1);
    }
}