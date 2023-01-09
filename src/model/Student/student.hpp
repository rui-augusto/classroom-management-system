#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "../person.hpp"

class Student : public Person{
    string course;
    string matriculation;
public:
    // * constructor
    Student();
    Student(string, string, string, string, string);

    // * getters and setters
    string getCourse();
    void setCourse(string);

    string getMatriculation();
    void setMatriculation(string);

    // * student functions
    // * creates new student
    Student creates();

    // * searches a student 
    void show(vector<Student>);

    // * updates a student
    Student updates(Student);

    // * deletes a student
    void deletes(vector<Student>&, int);

    // * find student by matriculation (returns index)
    int findIndex(vector<Student>);
    
    // * operator overloading
    friend ostream& operator<<(ostream&, Student&);
    
};

#endif /* STUDENT_HPP */
