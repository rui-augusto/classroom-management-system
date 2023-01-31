#ifndef CLASSROOM_HPP
#define CLASSROOM_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Classroom{
    bool available; // * should be an array of 5 (weekdays) positions
    int capacity;
public:
    // * constructor
    Classroom(); // TODO: remember to implement (used in Course.cpp)
    Classroom(int); // ? vector<Student> should be a parameter ?

    // * getters and setters
    // vector<Student> getStudents();
    // void setStudents(Student); // * only push one student at time

    bool getAvailable();
    void setAvailable(bool);

    int getCapacity();
    void setCapacity(int);

    // * Classroom functions
    // * creates a classroom
    Classroom creates();

    // * shows classrooms
    void show(vector<Classroom>);

    // * updates a classroom
    Classroom updates(Classroom);

    // * deletes a classroom
    vector<Classroom> deletes(vector<Classroom>, int);

    // * finds a index of a classroom
    int findIndex(vector<Classroom>);

    // * operator overloading
    friend ostream& operator<<(ostream&, Classroom&);
};

#endif /* CLASSROOM_HPP */