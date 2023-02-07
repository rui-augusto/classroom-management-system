#include "../.hpp/classroomMenu.hpp"

void ClassroomMenu::showMenu(){
    system("clear||cls"); // clear the screen
    cout << " 1. Cadastrar Sala" <<endl;
    cout << " 2. Consultar Sala" <<endl;
    cout << " 3. Voltar ao MENU INICIAL" <<endl;
}

void ClassroomMenu::getAnswer(Controller* controller){
    int op = -1;
    
    vector<Classroom> classrooms = controller->getClassrooms();
    Classroom classroom;

    while (op != 4){
        cin >> op;
        switch (op){

        case 1: // * register new classroom
            classroom = classroom.creates();
            classrooms.push_back(classroom);
            controller->setClassrooms(classrooms);
            break;
        case 2: // * searches for a classroom
            classroom.show(controller->getClassrooms());
            break;
        case 3:
            return;
        default:
            cout << "Informe uma opcao valida." <<endl;
        }
    }
}