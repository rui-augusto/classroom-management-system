#include "../.hpp/teacherMenu.hpp"

void TeacherMenu::showMenu(){
    system("clear||cls"); // clear the screen
    cout << " 1. Cadastrar Professor" <<endl;
    cout << " 2. Consultar Professor" <<endl;
    cout << " 3. Excluir Professor" <<endl;
    cout << " 4. Atualizar Professor" <<endl;
    cout << " 5. Voltar ao MENU INICIAL" <<endl;
}

void TeacherMenu::getAnswer(){
    int op = -1, index;
    // setOption(op);
    // * student info
    vector<Teacher> teachers;
    Teacher teacher;
    while (op != 5){
        cin >> op;
        switch (op){
            case 1: // * register new teacher
                teacher = teacher.creates();
                teachers.push_back(teacher);
                break;
            case 2: // * searches for a teacher
                teacher.show(teachers);
                break;
            case 3: // * deletes a teacher
                index = teacher.findIndex(teachers);
                teacher.deletes(teachers, index);
                break;
            case 4: // * updates a teacher
                index = teacher.findIndex(teachers);
                teachers[index] = teacher.updates(teachers[index]);
                break;
            case 5:
                return;
            default: 
                cout << "informe uma opcao valida." <<endl;   
        }
        showMenu();
    }
}