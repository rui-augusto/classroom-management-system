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

Course Course::updates(Course course){ // * only updates the code
    int newCode;

    cout << "Informe o novo codigo do curso: ";
    cin >> newCode;

    course.setCode(newCode);

    return course;
}

void Course::deletes(vector<Course>& courses, int index){
    auto it = courses.begin();
    advance(it, index);
    courses.erase(it);
}

int Course::findIndex(vector<Course> courses){
    int code, index;

    while(true){
        index = 0;

        cout << "Informe o codigo do curso: ";
        cin >> code;

        for(auto it = begin(courses); it != end(courses); it++, index++){
            if ((*it).code == code){
                return index;
            }
        }
        cout << "Codigo informado nao pertence a nenhum curso." <<endl;
    }
}

ostream& operator<<(ostream& out, Course& course){
    out << "Codigo: " << course.getCode() <<endl;
    out << "Dados da sala do primeiro dia de aula: " <<endl;
    out << course.firstDay;
    out << "Dados da sala do segundo dia de aula: " <<endl;
    out << course.secondDay;

    return out;
}