#ifndef REPORT_HPP
#define REPORT_HPP

#include <iostream> 
#include <vector>

// TODO: find in POO slides how the code should be when using templates


// TODO: the 'Relatorio' class should have only '.hpp' file
// * when using a template, the class may not have a '.cpp'
// TODO: verify if it is correct <

template <typename AnyVector>
class Report{
public:
    // * report functions
    // * gets the vector option (student, teacher...)
    // * gets the input option (inScreen, inFile)
    void analysePrintOption(){

    }

    // TODO: remove from 'Controller' class the above functions
    // * put the same code only in this file

    template <typename AnyVector>
    void printInScreen(vector <AnyVector> anyVector, string date){
        int i = 1; // * vector "ID"
        for(auto it = anyVector.begin(); it != AnyVector.end(); it++, i++){
            cout << date << i << ":";
            cout << *it;
        }
    }
    
    template <typename AnyVector>
    void printInFIle(vector <AnyVector>);
};

#endif /* REPORT_HPP */