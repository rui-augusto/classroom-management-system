#ifndef MANAGAR_HPP
#define MANAGAR_HPP

#include "../person.hpp"

class Manager : Person{
    string username;
    string password;
public:
    // * constructors
    Manager();
    Manager(string, string, string, string, string);

    // * getters and setters
    string getUsername();
    void setUsername(string);

    string getPassword();
    void setPassword(string);
    
    // * Manager functions

    bool login(string, string);
};

#endif /* MANAGER_HPP */
