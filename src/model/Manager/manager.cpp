#include "manager.hpp"

Manager::Manager() : Person(){
    username = "";
    password = "";
}

Manager::Manager(
    string name,
    string telephone,
    string cpf,
    string username,
    string password
) : Person(name, telephone, cpf){
    setUsername(username);
    setPassword(password);
}

string Manager::getUsername(){
    return this->username;
}

void Manager::setUsername(string username){
    this->username = username;
}

string Manager::getPassword(){
    return this->password;
}

void Manager::setPassword(string password){
    this->password = password;
}

bool Manager::getIsValid(){
    return this->isValid;
}

void Manager::setIsValid(bool isValid){
    this->isValid = isValid;
}


void Manager::login(string username, string password){
    ifstream file("database/managers.txt");
    string name, cpf, telephone;

    if (!file) { perror("Error"); }

    while (file >> name >> cpf >> telephone >> this->username >> this->password){
        if (username == this->username && password == this->password) setIsValid(true);
    }
    setIsValid(false);
}