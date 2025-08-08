#include<iostream>
using namespace std;

class player{
    public:
    int id;
    string name;

    void insert(int i, string n){
        id=i;
        name=n;
    }

    void display(){
        cout<<id<< " "<<name<<endl;
    }
};

int main(){
player p1,p2;

p1.insert(10,"Nikhil");
p2.insert(20,"jamwal");

p1.display();
p2.display();



}
