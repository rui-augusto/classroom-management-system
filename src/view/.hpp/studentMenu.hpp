#ifndef STUDENTMENU_HPP
#define STUDENTMENU_HPP

#include "menu.hpp"
#include "../../model/Student/student.hpp"

class StudentMenu : public Menu{
    Student student;
public:
    void showMenu();
    void getAnswer();
};

#endif /* STUDENTMENU_HPP */