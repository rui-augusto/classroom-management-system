#include "../.hpp/courseMenu.hpp"

void CourseMenu::showMenu(){
    system("clear||cls"); // clear the screen
    cout << " 1. Cadastrar Curso" <<endl;
    cout << " 2. Consultar Curso" <<endl;
    cout << " 3. Excluir Curso" <<endl;
    cout << " 4. Atualizar Curso" <<endl;
    cout << " 5. Voltar ao MENU INICIAL" <<endl;
}

void CourseMenu::getAnswer(){
    int op = -1;

    vector<Course> courses;
    Course course;
    // Course course();

    while (op != 5){
        cin >> op;
        switch (op){
            case 1: // * register new course
                cout << "register new course" << endl;
                break;
            case 2: // * searches for a course
                cout << "searches for a course" << endl;
                break;
            case 3: // * deletes a course
                cout << "deletes a course" << endl;
                break;
            case 4: // * updates a course
                cout << "updates a course" << endl;
                break;
            case 5:
                return;
            default: 
                cout << "informe uma opcao valida." <<endl;   
        }
        showMenu();
    }
}