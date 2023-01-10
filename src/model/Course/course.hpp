#ifndef COURSE_HPP
#define COURSE_HPP

#include <iostream>

using namespace std;

#include "../Classroom/classroom.hpp"
// #include "../Teacher/teacher.hpp"

class Course{
    int code;
    Classroom firstDay;
    Classroom secondDay;
public:
    // * constructor
    Course();
    Course(int, Classroom, Classroom);

    // * getters and setters
    int getCode();
    void setCode(int);

    Classroom getFirstDay();
    void setFirstDay(Classroom);

    Classroom getSecondDay();
    void setSecondDay(Classroom);

    // * Course functions

    void show(vector<Course>);

    // * operator overloading
    friend ostream& operator<<(ostream&, Course&);

};

#endif /* COURSE_HPP */