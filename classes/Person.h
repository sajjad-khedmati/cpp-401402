#include <iostream>
#include <string>

using namespace std;

class Person{
    string firstname;
    string lastname;

public:
    Person(string fName = "" , string lName = ""){
        this->firstname = fName;
        this->lastname = lName;
    }

    void Print(){
        cout<<this->firstname<<"  "<<this->lastname<<endl;
    }
};