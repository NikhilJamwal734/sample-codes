#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<" Eating..."<<endl;

    }
};

class dog :public Animal{
        public:
        void bark(){
            cout<<"dog barks"<<endl;
        }
};

class puppy :public dog{
    public:
    void weep(){
        cout<<"puppy is weeping"<<endl;
    };
};

int main(){
    puppy p1;
    p1.eat();
    p1.bark();
    p1.weep();

    return 0;
}