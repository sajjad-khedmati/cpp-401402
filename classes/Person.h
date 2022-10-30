#include <string>
using namespace std;

class Person{
    string firstName;
    string lastName;
    string gender;
    int age;
    string nationalCode;

public:
    Person(string fName = "" , string lName = "" , string gender = "" , int age = 0 , string nCode = ""){
        this->firstName = fName;
        this->lastName = lName;
        this->gender = gender;
        this->age = age;
        this->nationalCode = nCode;
    }

    void Print () {
        cout<<this->firstName<<endl;
    }

    // getter
    string getFirstName(){
        return this->firstName;
    }
    //setter
    void setFirstName(string fName){
        this->firstName = fName;
    }
};