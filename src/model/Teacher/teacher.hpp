#ifndef TEACHER_HPP
#define TEACHER_HPP

#include "../Person/person.hpp"
#include "../Course/course.hpp"

class Teacher : public Person{
    Course course;
public:
    // * constructors
    Teacher();
    Teacher(string, string, string, Course);

    // * getters and setters
    Course getCourse();
    void setCourse(Course);

    // * teacher functions
    // * creates a teacher
    Teacher creates();

    // * show teachers
    void show(vector<Teacher>);

    // * updates a teacher
    Teacher updates(Teacher);

    // * deletes a teacher
    vector<Teacher> deletes(vector<Teacher>&, int);

    // * find teacher by Course (returns index)
    int findIndex(vector<Teacher>);
    
    // * operator overloading
    friend ostream& operator<<(ostream&, Teacher&);

};

#endif /* TEACHER_HPP */