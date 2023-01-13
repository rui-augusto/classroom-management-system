#include "main.hpp"

int main(){

    vector<Manager> managers;

    Manager manager(
        "Rui Augusto",
        "(31) 97172-2336",
        "126.426.716-90",
        "ruis@admin",
        "123456"
    );

    managers.push_back(manager);

    string username, password;

    cout << "Informe seu usuario de Gestor: ";
    cin >> username;

    cout << "Informe sua senha de Gestor: ";
    cin >> password;

    bool authorized = manager.login(managers, username, password);

    if (authorized){
        while(true){
            Menu menu;
            menu.showMenu();
        }
    }

    // TODO: control all the weekdays in 'Classroom'
    // * available should be an array of 5 positions,
    // * that represents the weekdays 

    // TODO: 
    // ? add a new option in 'updates' function
    // * 'updates all info' in updates function

    // TODO:
    // ? show all students or show only one by index?
    // * ask what the manager wants to do in 'show' function

    // TODO: exit option for main menu

    // TODO: create new class to alocate all vectors and info

    // TODO: reorganizar e reestruturar como vai funcionar
    // ( chama-se menu, depois entra em um sub menu e assim volta para o menu)
    // ( até que a opção informada seja sair do menu e, assim, encerrar o programa)

    return 0;
}
