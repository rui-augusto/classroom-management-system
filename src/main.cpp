#include "main.hpp"
#include "model/Student/student.hpp"

int main(){

    // Menu menu;
    // menu.showMenu();
    // menu.getAnswer();

    Student student;

    student = student.creates();

    cout << student;

    student = student.deletes(&student);

    cout << student;

    // descobrir um jeito de deletar
    // reorganizar e reestruturar como vai funcionar
    // ( chama-se menu, depois entra em um sub menu e assim volta para o menu)
    // ( até que a opção informada seja sair do menu e, assim, encerrar o programa)

    return 0;
}

// em menu.hpp,
// vou ter que dar include em todos os outros menus
// e em getAnswer, vou ter que criar uma nova instancia para o que for solicitaod
// apos criar a nova instancia