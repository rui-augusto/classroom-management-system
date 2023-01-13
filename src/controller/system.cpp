#include "system.hpp"

System::System(){}

vector<Classroom> System::getClassrooms(){
    return this->classrooms;
}

void System::setClassrooms(vector<Classroom> classrooms){
    this->classrooms = classrooms;   
}

vector<Course> System::getCourses(){
    return this->courses;
}

void System::setCourses(vector<Course> courses){
    this->courses = courses;
}

vector<Manager> System::getManagers(){
    return this->managers;
}

void System::setManagers(vector<Manager> managers){
    this->managers = managers;
}

vector<Student> System::getStudents(){
    return this->students;
}

void System::setStudents(vector<Student> students){
    this->students = students;
}

vector<Teacher> System::getTeachers(){
    return this->teachers;
}

void System::setTeachers(vector<Teacher> teachers){
    this->teachers = teachers;
}

