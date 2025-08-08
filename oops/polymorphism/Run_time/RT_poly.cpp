#include<iostream>
using namespace std;

class Animal{
    public:
    void sound(){
        cout<<"this is a generic animal sound"<<endl;
    }
};

class Dog : public Animal{
    public:
    // funciton with the same name in the derived class (hides base class function)
    void sound(){
        cout<<"The dog barks"<<endl;
    }
};

class Cat : public Animal{
    public:
    void sound(){
        cout<<"the cat mewos"<<endl;
    }
};

int main(){
    Animal animal;
    Dog dog;
    Cat cat;

    // call the functions directly from objects
    animal.sound();     // call animal's version
    dog.sound();        // calls dog's version (hides animal's version)
    cat.sound();        // calls cat's version ( hides animal's version)

    return 0;
}