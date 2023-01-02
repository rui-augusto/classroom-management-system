#include "../.hpp/studentMenu.hpp"

void StudentMenu::showMenu(){
    system("clear||cls"); // clear the screen
    cout << " 1. Cadastrar Aluno" <<endl;
    cout << " 2. Consultar Aluno" <<endl;
    cout << " 3. Excluir Aluno" <<endl;
    cout << " 4. Atualizar Aluno" <<endl;
    cout << " 5. Voltar ao MENU INICIAL" <<endl;
}

void StudentMenu::getAnswer(){
    int op = -1;
    // setOption(op);
    // * student info
    Student student;
    while (op < 0 || op > 5){
        cin >> op;
        switch (op){
            case 1: // * register new student
                student = student.creates(); // TODO: remember to push this into some data
                break;
            case 2: // * searches for a student
                // ! student.searches();
                break;
            case 3: // * deletes a student
                student = student.deletes(&student);
                break;
            case 4: // * updates a student
                student = student.updates(student);
                break;
            default: 
                cout << "informe uma opcao valida." <<endl;   
        }
    }
}