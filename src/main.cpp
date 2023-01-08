#include "main.hpp"
#include <vector>

int main(){

    while(true){
        Menu menu;
        menu.showMenu();
    }

    // TODO: GET THE INDEX AND THEN UPDATES IN THE INDEX
    // * use it on 'deletes' and 'updates' functions

    // TODO: descobrir um jeito de deletar
    // * USE delete FOR DELETING
    // TODO: reorganizar e reestruturar como vai funcionar
    // ( chama-se menu, depois entra em um sub menu e assim volta para o menu)
    // ( até que a opção informada seja sair do menu e, assim, encerrar o programa)

    return 0;
}

// em menu.hpp,
// vou ter que dar include em todos os outros menus
// e em getAnswer, vou ter que criar uma nova instancia para o que for solicitaod
// apos criar a nova instancia