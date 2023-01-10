#include "course.hpp"

Course::Course() {
    this->code = 0;
    this->firstDay = Classroom();
    this->secondDay = Classroom();
}

Course::Course(int code, Classroom firstDay, Classroom secondDay){
    setCode(code);
    setFirstDay(firstDay);
    setSecondDay(secondDay);
}

int Course::getCode(){
    return this->code;
}

void Course::setCode(int code){
    this->code = code;
}

Classroom Course::getFirstDay(){
    return this->firstDay;
}

void Course::setFirstDay(Classroom firstDay){
    this->firstDay = firstDay;
}

Classroom Course::getSecondDay(){
    return this->secondDay;
}

void Course::setSecondDay(Classroom secondDay){
    this->secondDay = secondDay;
}

Course Course::creates(){
    int code;
    Classroom firstDay, secondDay;

    cout << "Informe o codigo do curso: ";
    cin >> code;

    cout << "Alocacao do primeiro dia de aula." <<endl;
    firstDay = firstDay.creates();

    cout << "Alocacao do segundo dia de aula." <<endl;
    secondDay = secondDay.creates();

    return Course(code, firstDay, secondDay);
}

void Course::show(vector<Course> courses){
    int i = 1; // * Course "ID"

    cout << "Total de cursos: " << courses.size() <<endl;

    // * show every student of the Courses vector
    for(auto it = begin(courses); it != end(courses); it++, i++){
        cout <<endl <<endl;
        cout << "Dados do curso " << i << ":" <<endl;
        cout << *it;
    }

    cout << "Pressione uma tecla para voltar ao menu.";
    getchar(); getchar();

}

ostream& operator<<(ostream& out, Course& course){
    out << "Codigo: " << course.getCode() <<endl;
    out << "Dados da sala do primeiro dia de aula: " <<endl;
    out << course.firstDay;
    out << "Dados da sala do segundo dia de aula: " <<endl;
    out << course.secondDay;

    return out;
}