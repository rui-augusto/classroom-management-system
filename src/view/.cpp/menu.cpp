#include "../.hpp/menu.hpp"
#include "../.hpp/studentMenu.hpp"


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
    getAnswer();
}

void Menu::getAnswer(){
    int op;
    cin >> op;

    setOption(op);

    StudentMenu studentMenu;
    
    switch (this->option){
        case 1:
            studentMenu.showMenu();
            studentMenu.getAnswer();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;   
    }
}