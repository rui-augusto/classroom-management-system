#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

// * remember to remove the common lib include
#include "../include/common.hpp" // TODO: add all common libs

#include "../model/Classroom/classroom.hpp"
#include "../model/Course/course.hpp"
#include "../model/Student/student.hpp"
#include "../model/Teacher/teacher.hpp"

template <typename AnyVector>
void printVectorInScreen(vector <AnyVector> anyVector, string date){
    int i = 1; // * vector "ID"
    for(auto it = begin(anyVector); it != end(anyVector); it++, i++){
        cout << date << " " << i << ":" <<endl;
        cout << *it;
    }
    cout << "Pressione uma tecla para voltar ao menu.";
    getchar(); getchar();
}

// ! CANNOT DEFINE ANOTHER TEMPLATE FOR USING IN 'printInFile' FUNCTION

class Controller{
    vector<Classroom> classrooms;
    vector<Course> courses;
    vector<Student> students;
    vector<Teacher> teachers;
public:
    // * constructors
    Controller();
    
    // * getters and setters
    vector<Classroom> getClassrooms();
    void setClassrooms(vector<Classroom>);
    
    vector<Course> getCourses();
    void setCourses(vector<Course>);

    vector<Student> getStudents();
    void setStudents(vector<Student>);

    vector<Teacher> getTeachers();
    void setTeachers(vector<Teacher>);

    // * controller functions
    void printInScreen(int date){
        system("cls||clear");
        switch(date){
            case 1:
                cout << "Dados de ALUNOS: " <<endl <<endl;
                printVectorInScreen(this->students, "Aluno");
                break;
            case 2:
                cout << "Dados de PROFESSORES: " <<endl <<endl;
                printVectorInScreen(this->teachers, "Professor");
                break;
            case 3:
                cout << "Dados de CURSOS: " <<endl <<endl;
                printVectorInScreen(this->courses, "Curso");
                break;
            case 4:
                cout << "Dados de SALAS: " <<endl <<endl;
                printVectorInScreen(this->classrooms, "Sala");
                break;
        }
        cout <<endl <<endl;
    }

    void printInFile(int date){
        ofstream file;

        switch(date){
            case 1:
                cout << "Dados de ALUNOS foram impressos em 'students.txt'." <<endl <<endl;
                file.open("database/students.txt");
                if (!file) { perror("Error"); }
                for (auto it = begin(this->students); it != end(this->students); it++){
                    file << *it;
                }
                break;
            case 2:
                cout << "Dados de PROFESSORES foram impressos em 'teachers.txt'." <<endl <<endl;
                file.open("database/teachers.txt");
                if (!file) { perror("Error"); }
                break;
            case 3:
                cout << "Dados de CURSOS foram impressos em 'courses.txt'." <<endl <<endl;
                file.open("database/courses.txt");
                if (!file) { perror("Error"); }
                break;
            case 4:
                cout << "Dados de SALAS foram impressos em 'classrooms'.txt" <<endl <<endl;
                file.open("database/classrooms.txt");
                if (!file) { perror("Error"); }
                break;
        }
    }

    // * get the print option answer
    void showOptions(){
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

        if (!printOption){
            return this->printInScreen(dateOption);
        }
        return this->printInFile(dateOption);
    }
};

#endif /* SYSTEM_HPP */