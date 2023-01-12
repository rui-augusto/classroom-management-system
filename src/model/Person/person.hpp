#ifndef PERSON_HPP
#define PERSON_HPP  

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person{
    string name;
    string telephone;
    string cpf;
public:
    //constructor
    Person();
    Person(string, string, string);

    // getters and setters
    string getName();
    void setName(string);

    string getTelephone();
    void setTelephone(string);

    string getCpf();
    void setCpf(string);
};

#endif /* PERSON_HPP */