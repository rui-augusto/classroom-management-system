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

// bool Manager::getIsValid(){
//     return this->isValid;
// }

// void Manager::setIsValid(bool isValid){
//     this->isValid = isValid;
// }


bool Manager::login(){
    ifstream file("database/managers.txt");
    string name, cpf, telephone;
    string username, password;

    cout << "Informe o usuario e senha de administrador." << endl;
    cout << "Usuario: "; cin >> username;
    cout << "Senha: "; cin >> password;

    if (!file) { perror("Error"); }

    while (file >> name >> cpf >> telephone >> this->username >> this->password){
        if (username == this->username && password == this->password) return true;
    }
    return false;
}