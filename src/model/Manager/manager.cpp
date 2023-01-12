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

bool Manager::login(vector<Manager> managers, string username, string password){
    for(auto it = begin(managers); it != end(managers); it++){
        if((*it).getUsername() == username && (*it).getPassword() == password){
            return true; // * manager account exists
        }
    }

    return false;
}