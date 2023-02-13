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
    system("clear||cls"); // * clear the screen
    cout << " 1. Gerenciar Aluno" <<endl;
    cout << " 2. Gerenciar Professor" <<endl;
    cout << " 3. Gerenciar Curso" <<endl;
    cout << " 4. Cadastrar Sala" <<endl;
    cout << " 5. Gerar Relatorio" <<endl; 
    cout << " 6. SAIR" <<endl;
    getAnswer();
}

void Menu::getAnswer(){
    StudentMenu studentMenu;
    CourseMenu courseMenu;
    TeacherMenu teacherMenu;
    ClassroomMenu classroomMenu;

    int op;
    while(op != 6){
        cin >> op;
        setOption(op);
        switch (this->option){
            case 1: // * students menu
                studentMenu.showMenu();
                studentMenu.getAnswer(&controller, manager);
                break;
            case 2: // * teachers menu
                teacherMenu.showMenu();
                teacherMenu.getAnswer(&controller);
                break;
            case 3: // * courses menu
                courseMenu.showMenu();
                courseMenu.getAnswer(&controller);
                break;
            case 4: // * classrooms menu
                classroomMenu.showMenu();
                classroomMenu.getAnswer(&controller);
                break;
            case 5: // * generate report
                controller.showOptions();
                break;
            case 6:
                cout << "Encerrando o sistema..." <<endl;
                exit(1);
                break;
            default:
                cout << "Informe uma opcao valida." <<endl;
                cout << "Pressione uma tecla para continuar.";
                getchar(); getchar();
        }
        showMenu();
    }
}