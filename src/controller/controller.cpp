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

void Controller::printInScreen(){
    system("cls||clear");
    cout << "Imprimindo todas as informações do sistema." <<endl; 

    cout << "Alunos: " <<endl;
    for (auto it = begin(students); it != students.end(); it++){
        cout << *it;
    }
    cout <<endl <<endl;

    cout << "Professores: " <<endl;
    for (auto it = begin(teachers); it != teachers.end(); it++){
        cout << *it;
    }
    cout <<endl <<endl;
}

void Controller::printInFile(){

}

void Controller::showOptions(){
    bool looping = false; // * controls the loop until receives a valid option
    int option = -1;

    while (!looping){
        cout << "Informe qual o formato do relatorio que vai ser gerado: " <<endl;
        cout << "0 - Em tela" <<endl;
        cout << "1 - Em arquivo txt" <<endl;
        cin >> option;
        looping = option != 0 && option != 1;
        if (!looping){
            cout << "Informe uma opcao valida.";
        }
    }    
    if (option){
        return this->printInScreen();
    }
    return this->printInFile();

}