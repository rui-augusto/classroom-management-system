#ifndef CLASSROOMMENU_HPP
#define CLASSROOMMENU_HPP

#include "menu.hpp"
#include "../../model/Classroom/classroom.hpp"

class ClassroomMenu : public Menu{
    Classroom classroom;
public:
    
    void showMenu();
    void getAnswer();
    
};

#endif /* CLASSROOM_HPP */