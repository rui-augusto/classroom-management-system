#include "../.hpp/studentMenu.hpp"

void StudentMenu::showMenu(){
    system("clear||cls"); // clear the screen
    cout << " 1. Cadastrar Aluno" <<endl;
    cout << " 2. Consultar Aluno" <<endl;
    cout << " 3. Excluir Aluno" <<endl;
    cout << " 4. Atualizar Aluno" <<endl;
    cout << " 5. Voltar ao MENU INICIAL" <<endl;
}

void StudentMenu::getAnswer(Controller* controller, Manager manager){
    int op = -1, index;

    vector<Student> students = controller->getStudents();
    Student student;

    while (op != 5){
        cin >> op;
        switch (op){
            case 1: // * register new student
                if (manager.login()){
                    student = student.creates();
                    students.push_back(student);
                    controller->setStudents(students);
                } else { 
                    cout << "Voce deve informar credenciais validas para ter acesso a esta opcao." << endl;
                    getchar(); getchar();     
                }
                break;
            case 2: // * searches for a student
                index = student.findIndex(students);
                student.show(controller->getStudents(), index);
                break;
            case 3: // * deletes a student
                if (manager.login()){
                    index = student.findIndex(students);
                    controller->setStudents(student.deletes(students, index));
                } else {
                    cout << "Voce deve informar credenciais validas para ter acesso a esta opcao." << endl;
                    getchar(); getchar();  
                }
                break;
            case 4: // * updates a student
                if (manager.login()){
                    index = student.findIndex(students);
                    students[index] = student.updates(students[index]);
                    controller->setStudents(students);
                } else {
                    cout << "Voce deve informar credenciais validas para ter acesso a esta opcao." << endl;
                    getchar(); getchar(); 
                }
                break;
            case 5:
                break;
            default: 
                cout << "informe uma opcao valida." <<endl;   
        }
        if (op != 5){
            showMenu();
        }
    }
}