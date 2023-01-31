#include "controller.hpp"

Controller::Controller(){}

vector<Classroom> Controller::getClassrooms(){
    return this->classrooms;
}

void Controller::setClassrooms(vector<Classroom> classrooms){
    this->classrooms = classrooms;   
}

vector<Course> Controller::getCourses(){
    return this->courses;
}

void Controller::setCourses(vector<Course> courses){
    this->courses = courses;
}

vector<Manager> Controller::getManagers(){
    return this->managers;
}

void Controller::setManagers(vector<Manager> managers){
    this->managers = managers;
}

vector<Student> Controller::getStudents(){
    return this->students;
}

void Controller::setStudents(vector<Student> students){
    this->students = students;
}

vector<Teacher> Controller::getTeachers(){
    return this->teachers;
}

void Controller::setTeachers(vector<Teacher> teachers){
    this->teachers = teachers;
}
