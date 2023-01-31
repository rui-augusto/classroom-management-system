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
    int op = -1, index;
    // setOption(op);
    // * student info
    vector<Student> students = controller.getStudents();
    Student student;
    while (op != 5){
        cin >> op;
        switch (op){
            case 1: // * register new student
                student = student.creates();
                students.push_back(student);
                controller.setStudents(students);
                break;
            case 2: // * searches for a student
                student.show(controller.getStudents());
                break;
            case 3: // * deletes a student
                index = student.findIndex(students);
                controller.setStudents(student.deletes(students, index));
                // student = student.deletes(&student);
                // cout << student;
                break;
            case 4: // * updates a student
                index = student.findIndex(students);
                students[index] = student.updates(students[index]);
                controller.setStudents(students);
                // student = student.updates(student);
                break;
            case 5:
                return;
            default: 
                cout << "informe uma opcao valida." <<endl;   
        }
        showMenu();
    }
}