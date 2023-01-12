#include "person.hpp"

Person::Person(){
    name = "";
    telephone = "";
    cpf = "";
}

Person::Person(string name, string tel, string cpf){
    setName(name);
    setTelephone(tel);
    setCpf(cpf);
}

string Person::getName(){
    return this->name;
}

void Person::setName(string name){
    this->name = name;
}

string Person::getTelephone(){
    return this->telephone;
}

void Person::setTelephone(string tel){
    this->telephone = tel;
}

string Person::getCpf(){
    return this->cpf;
}

void Person::setCpf(string cpf){
    this->cpf = cpf;
}