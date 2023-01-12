#ifndef TEACHERMENU_HPP
#define TEACHERMENU_HPP

#include "menu.hpp"
#include "../../model/Teacher/teacher.hpp"

class TeacherMenu : public Menu{
    Teacher teacher;
public:

    void showMenu();
    void getAnswer();

};

#endif /* TEACHERMENU_HPP */