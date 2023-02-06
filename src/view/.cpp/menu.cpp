#include "../.hpp/menu.hpp"
#include "../.hpp/studentMenu.hpp"
#include "../.hpp/courseMenu.hpp"
#include "../.hpp/teacherMenu.hpp"
#include "../.hpp/classroomMenu.hpp"

Menu::Menu() {
    setOption(0);
}

int Menu::getOption(){
    return this->option;
}

void Menu::setOption(int op){
    this->option = op;
}

void Menu::showMenu(){
    system("clear||cls"); // clear the screen
    cout << " 1. Gerenciar Aluno" <<endl;
    cout << " 2. Gerenciar Professor" <<endl;
    cout << " 3. Gerenciar Curso" <<endl;
    cout << " 4. Cadastrar Sala" <<endl;
    cout << " 5. Gerar Relatorio" <<endl; // TODO: search for some extension to print ´
    cout << " 6. SAIR" <<endl;
    getAnswer();
}

void Menu::getAnswer(){
    StudentMenu studentMenu;
    CourseMenu courseMenu;
    TeacherMenu teacherMenu;
    ClassroomMenu classroomMenu;

    Controller controller;

    int op;
    while(op != 6){
        cin >> op;
        setOption(op);
        switch (this->option){
            case 1: // * students menu
                studentMenu.showMenu();
                studentMenu.getAnswer();
                break;
            case 2: // * teachers menu
                teacherMenu.showMenu();
                teacherMenu.getAnswer();
                break;
            case 3: // * courses menu
                courseMenu.showMenu();
                courseMenu.getAnswer();
                break;
            case 4: // * classrooms menu
                classroomMenu.showMenu();
                classroomMenu.getAnswer();
                break;
            case 5: // * generate report
                break;
            case 6:
                cout << "Encerrando o sistema..." <<endl;
                break;
            default:
                cout << "Informe uma opcao valida." <<endl;
        }
        if (this->option != 5){
            showMenu();
        }
    }
}