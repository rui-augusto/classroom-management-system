#include "classroom.hpp"

Classroom::Classroom(){
    // this->students;
    this->capacity = 0;
}

Classroom::Classroom(int capacity){
    this->capacity = capacity;
}

// vector<Student> Classroom::getStudents(){
//     return this->students;
// }

// void Classroom::setStudents(Student student){
//     this->students.push_back(student);
// }

bool Classroom::getAvailable(){
    return this->available;
}

void Classroom::setAvailable(bool available){
    this->available = available;
}

int Classroom::getCapacity(){
    return this->capacity;
}

void Classroom::setCapacity(int capacity){
    this->capacity = capacity;
}

Classroom Classroom::creates(){
    int capacity;

    cout << "Informe a capacidade da sala: ";
    cin >> capacity;

    return Classroom(capacity);
}

void Classroom::show(vector<Classroom> classrooms){
    int i = 1; // * Classroom "ID"

    cout << "Total de salas: " << classrooms.size() <<endl;

    for (auto it = begin(classrooms); it != classrooms.end(); it++, i++){
        cout <<endl <<endl;
        cout << "Dados da sala " << i << ":" <<endl;
        cout << *it;
    }

    cout << "Pressione uma tecla para voltar ao menu.";
    getchar(); getchar();
}

Classroom Classroom::updates(Classroom classroom){
    int updt;
    
    cout << "Informe a nova capacidade da sala de aula: " <<endl;
    cin >> updt;

    classroom.setCapacity(updt);

    return classroom;

}

ostream& operator<<(ostream& out, Classroom& classroom){
    // out << "Quantidade de alunos: " << classroom.getStudents().size() <<endl;
    out << "Capacidade da sala: " << classroom.getCapacity() <<endl;

    return out;
}