#ifndef COURSE_HPP
#define COURSE_HPP

#include <iostream>
#include <vector>

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

    // * creates new course
    Course creates();

    // * searches a course
    void show(vector<Course>);

    // * updates a course
    Course updates(Course);

    // * deletes a course
    void deletes(vector<Course>&, int);

    // * operator overloading
    friend ostream& operator<<(ostream&, Course&);

};

#endif /* COURSE_HPP */