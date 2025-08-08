#include<iostream>
using namespace std;

class Account{
    public:
    int salary =50000;
};

class Programmer : public Account{  //creating the derived class and geting some properties of base class
    public:
    int bonus= 10000;
};

int main(){
    Programmer p1,p2;
    cout<<"salary :"<<p1.salary<<endl;
    cout<<"salary :"<<p2.salary<<endl;
    cout<<"bonus :"<<p1.bonus<<endl;
    cout<< &p1.bonus<< endl;
    cout<< &p2.bonus<< endl;

    return 0;
}