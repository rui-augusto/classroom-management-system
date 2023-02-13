#ifndef MANAGAR_HPP
#define MANAGAR_HPP

#include "../Person/person.hpp" // * verify if the inherance is being used
#include <fstream>

class Manager : Person{
    string username;
    string password;
    // bool isValid;
public:
    // * constructors
    Manager();
    Manager(string, string, string, string, string);

    // * getters and setters
    string getUsername();
    void setUsername(string);

    string getPassword();
    void setPassword(string);
    
    // bool getIsValid();
    // void setIsValid(bool);

    // * Manager functions

    bool login();
};

#endif /* MANAGER_HPP */
