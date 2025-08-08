#include<iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout << "eating...."<< endl;
        }
};

class Dog : public Animal{
    public:
        void bark(){
            cout<< "Barking...."<< endl;
        }
};

class BabyDog : public Dog{
    public:
        void weep(){
            cout<< "weeping...."<< endl;
        }
};

int main(void){
    BabyDog d1;
    d1.eat();
    d1.bark();
    d1.weep();

    return 0;
}