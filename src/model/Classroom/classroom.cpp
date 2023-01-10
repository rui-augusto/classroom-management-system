#include "classroom.hpp"

Classroom::Classroom(){
    // this->students;
    this->capacity = 0;
}

Classroom::Classroom(int capacity){
    this->capacity = capacity;
}

vector<Student> Classroom::getStudents(){
    return this->students;
}

void Classroom::setStudents(Student student){
    this->students.push_back(student);
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

ostream& operator<<(ostream& out, Classroom& classroom){
    out << "Quantidade de alunos: " << classroom.getStudents().size() <<endl;
    out << "Capacidade da sala: " << classroom.getCapacity() <<endl;

    return out;
}