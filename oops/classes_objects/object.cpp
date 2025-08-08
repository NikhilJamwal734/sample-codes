#include<iostream>
using namespace std;

class player{
    public:
    int id;
    string name;
};

int main(){
    player p1,p2; // p1 and p2 are two objects created under class player
    p1.id =10;
    p1.name= "nikhil";

    p2.id = 20;
    p2.name ="jamwal";

    cout << p1.id <<" "<< p1.name<<endl;
    cout << p2.id << p2.name;

    return 0;
}