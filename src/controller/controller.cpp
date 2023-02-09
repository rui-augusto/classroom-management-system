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

// void Controller::printInScreen(int date){
//     system("cls||clear");
//     switch(date){
//         // TODO: try to use TEMPLATES
//         case 1:
//             cout << "Alunos: " <<endl;
//             for (auto it = begin(students); it != students.end(); it++){
//                 cout << *it;
//             }
//             break;
//         case 2:
//             cout << "Professores: " <<endl;
//             for (auto it = begin(teachers); it != teachers.end(); it++){
//                 cout << *it;
//             }
//             break;
//     }
//     cout <<endl <<endl;
// }

// void Controller::printInFile(int date){
    
// }