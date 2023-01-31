#include "teacher.hpp"

Teacher::Teacher() : Person(){}

Teacher::Teacher(
    string name, 
    string telephone, 
    string cpf, 
    Course course
) : Person(name, telephone, cpf){
    setCourse(course);
}

Course Teacher::getCourse(){
    return this->course;
}

void Teacher::setCourse(Course course){
    this->course = course;
}

Teacher Teacher::creates(){
    string name, telephone, cpf;
    Course course;

    cout << "Informe o nome do novo professor: ";
    cin >> name;

    cout << "Informe o telefone do novo professor: ";
    cin >> telephone;

    cout << "Informe o CPF do novo professor: ";
    cin >> cpf;

    course = course.creates();

    return Teacher(name, telephone, cpf, course);
}

void Teacher::show(vector<Teacher> teachers){
    int i = 1; // * Teacher "ID"

    cout << "Total de professores: " << teachers.size() <<endl;
    for(auto it = begin(teachers); it != end(teachers); it++, i++){
        cout <<endl <<endl;
        cout << "Dados do professor " << i << ":" <<endl;
        cout << *it;
    }

    cout << "Pressione uma tecla para voltar ao menu.";
    getchar(); getchar();
}

Teacher Teacher::updates(Teacher teacher){
    int op;
    string updt;
    Course course;

    cout << "O que deseja atualizar?" <<endl;
    cout << "1. Nome" <<endl;
    cout << "2. Telefone" <<endl;
    cout << "3. CPF" <<endl;
    cout << "4. Curso" <<endl;

    cin >> op;

    switch(op){
        case 1:
            cout << "Informe o novo nome: " <<endl;
            cin >> updt;
            teacher.setName(updt);
            break;
        case 2:
            cout << "Informe o novo telefone: " <<endl;
            cin >> updt;
            teacher.setTelephone(updt);
            break;
        case 3:
            cout << "Informe o novo CPF: " <<endl;
            cin >> updt;
            teacher.setCpf(updt);
            break;
        case 4:
            course = teacher.getCourse(); // * current course info
            course = course.updates(course);
            teacher.setCourse(course);
            break;
    }
    return teacher;
}

vector<Teacher> Teacher::deletes(vector<Teacher>& teachers, int index){
    auto it = begin(teachers);
    advance(it, index);
    teachers.erase(it);
    return teachers;
}

int Teacher::findIndex(vector<Teacher> teachers){
    int index;
    string cpf;

    while(true){
        index = 0;

        cout << "Informe o CPF do professor em questao: ";
        cin >> cpf;

        for(auto it = begin(teachers); it != end(teachers); it++, index++){
            if((*it).getCpf() == cpf){
                return index;
            }
        }
        cout << "CPF nao corresponde ao cadastro de nenhum professor." <<endl;
    }
}

ostream& operator<<(ostream& out, Teacher& teacher){
    out << "Nome: " << teacher.getName() <<endl;
    out << "Telefone: " << teacher.getTelephone() <<endl;
    out << "CPF: " << teacher.getCpf() <<endl;
    out << "Curso: " << teacher.course <<endl;

    return out;
}