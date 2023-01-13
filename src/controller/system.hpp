#ifndef SYSTEM_HPP
#define SYSTEM_HPP

// * remember to remove the common lib include
#include "../include/common.hpp" // TODO: add all common libs

#include "../model/Classroom/classroom.hpp"
#include "../model/Course/course.hpp"
#include "../model/Manager/manager.hpp"
#include "../model/Student/student.hpp"
#include "../model/Teacher/teacher.hpp"

class System{
    vector<Classroom> classrooms;
    vector<Course> courses;
    vector<Manager> managers;
    vector<Student> students;
    vector<Teacher> teachers;
public:
    // * constructors
    System();
    
    // * getters and setters
    vector<Classroom> getClassrooms();
    void setClassrooms(vector<Classroom>);
    
    vector<Course> getCourses();
    void setCourses(vector<Course>);

    vector<Manager> getManagers();
    void setManagers(vector<Manager>);

    vector<Student> getStudents();
    void setStudents(vector<Student>);

    vector<Teacher> getTeachers();
    void setTeachers(vector<Teacher>);


    // * System functions
};

#endif /* SYSTEM_HPP */