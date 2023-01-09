#ifndef TEACHER_HPP
#define TEACHER_HPP

#include "../person.hpp"
#include "../Course/course.hpp";

class Teacher : public Person{
    Course course;
public:
    Teacher();
    Teacher(string, string, string, Course);
};

#endif /* TEACHER_HPP */