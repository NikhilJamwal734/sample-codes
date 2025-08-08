// constructor is a special method /member function which is invoked automatically at the time of object creation.
// constructor in c++ has the same name as class 

#include<iostream>
using namespace std;

class Employee{
    public:
    Employee(){                      // default constructor
        cout<<"Testing default constructor"<<endl;
    }
};

int main(void){

    Employee e1; // creating an object
    Employee e2;

    return 0;

}