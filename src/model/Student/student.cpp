#include "student.hpp"

Student::Student() : Person(){
    // course = "";
    matriculation = "";
} 

Student::Student(
    string name,
    string telephone, 
    string cpf, 
    Course course, 
    string matriculation
) : Person (name, telephone, cpf){
    setCourse(course);
    setMatriculation(matriculation);
}

Course Student::getCourse(){
    return this->course;
}

void Student::setCourse(Course course){
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
    string name, telephone, cpf, matriculation;
    Course course;

    cout << "Informe o nome do novo aluno:" <<endl;
    cin >> name;

    cout << "Informe o telefone do novo aluno:" <<endl;
    cin >> telephone;

    cout << "Informe o cpf do novo aluno:" <<endl;
    cin >> cpf;

    course = course.creates();

    cout << "Informe a matricula do novo aluno:" <<endl;
    cin >> matriculation;

    return Student(name, telephone, cpf, course, matriculation);
}

// TODO: new option to show only one student
void Student::show(vector<Student> students, int index){
    int i = 0; // * Student "ID"

    for(auto it = begin(students); it != students.end(); it++, i++){
        if (i == index) {
            cout << *it;
        }
    }

    cout << "Pressione uma tecla para voltar ao menu.";
    getchar(); getchar();
}

// * updates function
Student Student::updates(Student student){
    int op;
    string updt;
    Course course;
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
            course = student.getCourse(); // * current course info
            course = course.updates(course);
            student.setCourse(course);
            break;
        case 5:
            cout << "Informe a nova matricula: " <<endl;
            cin >> updt;
            student.setMatriculation(updt);
    }
    return student;
}

// * deletes function
vector<Student> Student::deletes(vector<Student>& students, int index){
    auto it = students.begin();
    advance(it, index);
    students.erase(it);
    return students;
}

int Student::findIndex(vector<Student> student){
    int index; // * index counter
    string matriculation;

    while(true){ // * only stops when the student is founded
        index = 0;

        cout << "Informe a matricula do aluno em questao: ";
        cin >> matriculation;
        
        for(auto it = begin(student); it != end(student); it++, index++){
            if((*it).getMatriculation() == matriculation){
                return index;
            }
        }
        cout << "Matricula nao corresponde ao cadastro de nenhum aluno" <<endl;
    }

}

ostream& operator<<(ostream& out, Student& student){

    out << "Nome: " << student.getName() <<endl;
    out << "Telefone: " << student.getTelephone() <<endl;
    out << "CPF: " << student.getCpf() <<endl;
    out << "Curso: " << student.course <<endl;
    out << "Matricula: " << student.matriculation <<endl;

    return out;
}