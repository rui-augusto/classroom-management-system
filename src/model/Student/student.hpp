#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "../Person/person.hpp"
#include "../Course/course.hpp"

class Student : public Person{
    Course course;
    string matriculation;
public:
    // * constructor
    Student();
    Student(string, string, string, Course, string);

    // * getters and setters
    Course getCourse();
    void setCourse(Course);

    string getMatriculation();
    void setMatriculation(string);

    // * student functions
    // * creates new student
    Student creates();

    // * searches a student 
    void show(vector<Student>, int);

    // * updates a student
    Student updates(Student);

    // * deletes a student
    vector<Student> deletes(vector<Student>&, int);

    // * find student by matriculation (returns index)
    int findIndex(vector<Student>);
    
    // * operator overloading
    friend ostream& operator<<(ostream&, Student&);
    
};

#endif /* STUDENT_HPP */
