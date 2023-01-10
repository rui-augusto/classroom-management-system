#ifndef CLASSROOM_HPP
#define CLASSROOM_HPP

#include "../Student/student.hpp"
#include <string>
#include <vector>

class Classroom{
    vector<Student> students;
    int capacity;
public:
    // * constructor
    Classroom(); // TODO: remember to implement (used in Course.cpp)
    Classroom(int); // ? vector<Student> should be a parameter ?

    // * getters and setters
    vector<Student> getStudents();
    void setStudents(Student); // * only push one student at time

    int getCapacity();
    void setCapacity(int);

    // * Classroom functions
    // * creates a classroom
    Classroom creates();


    // * operator overloading
    friend ostream& operator<<(ostream&, Classroom&);
};

#endif /* CLASSROOM_HPP */