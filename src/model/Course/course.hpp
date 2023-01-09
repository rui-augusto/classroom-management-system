#ifndef COURSE_HPP
#define COURSE_HPP

#include "../Classroom/classroom.hpp"
#include "../Teacher/teacher.hpp"

class Course{
    int code;
    Classroom firstDay;
    Classroom secondDay;
    Teacher teacher;
public:
    // * constructor
    Course();
    Course(int, Classroom, Classroom, Teacher);

    // * getters and setters
    int getCode();
    void setCode(int);

    Classroom getFirstDay();
    void setFirstDay(Classroom);

    Classroom getSecondDay();
    void setSecondDay(Classroom);

    Teacher getTeacher();
    void setTeacher(Teacher);

    // * Course functions

};

#endif /* COURSE_HPP */