#include "classroom.hpp"

Classroom::Classroom(){
    // this->students;
    this->capacity = 0;
}

Classroom::Classroom(int capacity){
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