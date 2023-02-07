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

void Controller::showOptions(){
    bool printOptionLooping = false; // * controls the print mode loop until receives a valid option
    int printOption = -1;
    bool dateOptionLooping = false;
    int dateOption = -1;

    while (!printOptionLooping){
        cout << "Informe qual o formato do relatorio que vai ser gerado: " <<endl;
        cout << "0 - Em tela" <<endl;
        cout << "1 - Em arquivo txt" <<endl;
        cin >> printOption;
        printOptionLooping = printOption == 0 || printOption == 1; // * verify if 'printOption' is valid
        if (!printOptionLooping){
            cout << "Informe uma opcao valida.";
        }
    }

    while (!dateOptionLooping){
        cout << "Informe quais dados devem ser imprimidos: " <<endl;
        cout << "1. Aluno" <<endl;
        cout << "2. Professor" <<endl;
        cout << "3. Curso" <<endl;
        cout << "4. Sala" << endl;
        cout << "5. Voltar ao MENU INICIAL" << endl;
        cin >> dateOption;
        if (dateOption > 0 && dateOption < 6) dateOptionLooping = true; 
    }

    if (printOptionLooping && dateOptionLooping){ // * if input is valid
        return this->printInScreen(dateOption);
    }
    return this->printInFile(dateOption);

}

void Controller::printInScreen(int date){
    system("cls||clear");
    switch(date){
        case 1:
            cout << "Alunos: " <<endl;
            for (auto it = begin(students); it != students.end(); it++){
                cout << *it;
            }
            break;
        case 2:
            cout << "Professores: " <<endl;
            for (auto it = begin(teachers); it != teachers.end(); it++){
                cout << *it;
            }
            break;
    }
    cout <<endl <<endl;
}

void Controller::printInFile(int date){
    
}