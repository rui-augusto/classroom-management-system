#ifndef MENU_HPP
#define MENU_HPP

// #include "../include/common.h"

#include <iostream>

using namespace std;

class Menu{
    int option;
public:
    // constructor
    Menu();

    // getters and setters
    int getOption();
    
    void setOption(int);

    // class functions
    void showMenu();

    void getAnswer();

};

#endif /* MENU_HPP */