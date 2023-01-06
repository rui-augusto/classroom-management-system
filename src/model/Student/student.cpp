#include "student.hpp"

Student::Student() : Person(){
    course = "";
    matriculation = "";
} 

Student::Student(
    string name,
    string telephone, 
    string cpf, 
    string course, 
    string matriculation
) : Person (name, telephone, cpf){
    setCourse(course);
    setMatriculation(matriculation);
}

string Student::getCourse(){
    return this->course;
}

void Student::setCourse(string course){
    this->course = course;
}

string Student::getMatriculation(){
    return this->matriculation;
}

void Student::setMatriculation(string mat){
    this->matriculation = mat;
}

// new student
Student Student::creates(){
    string name, telephone, cpf, course, matriculation;

    cout << "Informe o nome do novo aluno:" <<endl;
    cin >> name;

    cout << "Informe o telefone do novo aluno:" <<endl;
    cin >> telephone;

    cout << "Informe o cpf do novo aluno:" <<endl;
    cin >> cpf;

    cout << "Informe o curso do novo aluno:" <<endl;
    cin >> course;

    cout << "Informe a matricula do novo aluno:" <<endl;
    cin >> matriculation;

    return Student(name, telephone, cpf, course, matriculation);
}

// TODO: searches function
void Student::show(vector<Student> students){
    int i = 1; // * Student "ID"

    cout << "Total de alunos: " << students.size() <<endl;

    // * show every student of the Students vector
    for(auto it = begin(students); it != students.end(); it++, i++){
        cout <<endl <<endl;
        cout << "Dados do aluno " << i << ":" <<endl;
        cout << *it;
    }

    cout << "Pressione uma tecla para voltar ao menu.";
    getchar(); getchar();
}


Student Student::updates(Student student){
    int op;
    string updt;
    cout << "O que deseja atualizar?" <<endl;
    cout << "1. Nome" <<endl;
    cout << "2. Telefone" <<endl;
    cout << "3. CPF" <<endl;
    cout << "4. Curso" <<endl;
    cout << "5. Matricula" <<endl;

    cin >> op;
    switch(op){
        case 1:
            cout << "Informe o novo nome: " <<endl;
            cin >> updt;
            student.setName(updt);
            break;
        case 2:
            cout << "Informe o novo telefone: " <<endl;
            cin >> updt;
            student.setTelephone(updt);
            break;
        case 3:
            cout << "Informe o novo CPF: " <<endl;
            cin >> updt;
            student.setCpf(updt);
            break;
        case 4:
            cout << "Informe o novo curso: " <<endl;
            cin >> updt;
            student.setCourse(updt);
            break;
        case 5:
            cout << "Informe a nova matrícula: " <<endl;
            cin >> updt;
            student.setMatriculation(updt);
    }
    return student;
}

//TODO: deletes function
Student Student::deletes(Student* student){
    delete student;

    return *student;
}

ostream& operator<<(ostream& out, Student& student){

    out << "Nome: " << student.getName() <<endl;
    out << "Telefone: " << student.getTelephone() <<endl;
    out << "CPF: " << student.getCpf() <<endl;
    out << "Curso: " << student.course <<endl;
    out << "Matricula: " << student.matriculation <<endl;

    return out;
}