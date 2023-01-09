#ifndef COURSEMENU_HPP
#define COURSEMENU_HPP

#include "menu.hpp"
#include "../../model/Course/course.hpp"

class CourseMenu : public Menu{

public:
    void showMenu();
    void getAnswer();
};

#endif /* COURSEMENU */