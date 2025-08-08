

// SRO :  USED TO DEFINE THE MEMBER FUNCTION OUTSIDE THE CLASS
//        ACCESSING GLOBAL VARIABLE
//        NAMESPACE
//        ENUM CLASSES

#include<iostream>
using namespace std;

class MyClass{
    public:
    void printmessage();
};

// DEFINING THE FUNCTION OUTSTIDE THE CLASS (the synyas is (type of function then name of the class followed by :: and name of function))
void MyClass::printmessage(){
    cout<<"hello world"<<endl;
};

int main(){
    MyClass obj1;
    obj1.printmessage();

    return 0;
}