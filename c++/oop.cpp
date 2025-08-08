#include<iostream>
using namespace std;

// class Complex{
//     float imag; // member data
//     float real; // member data

// public:

// // member functions
// void setvalues(float r,float i){
//     real = r;
//     imag = i;

// }
// //  static function
// static Complex multiply(const Complex &c1,const Complex &c2 ){
//     Complex result;
//     result.real =c1.real*c2.real - c1.imag*c2.imag;
//     result.imag = c1.real*c2.imag + c1.imag*c2.real;
//     return result;
// }

// void display(){
//     if(imag>=0)
//     cout << real << " + " << imag<< "i" << endl;
//     else
//     cout<< real << " - "<<-imag<< "i"<<endl;
// }

// };


// class geometry{
//     public:

//     double area_rectangle(double length, double breadth){
//         return length*breadth ;
//     }

//     double perimeter_rectangle(double length, double breadth){
//     return 2*(length+breadth);
//     }

//     double area_circle(double radius){
//         return(3.14*radius*radius);
//     }

//     double circumfernce_circle(double radius){

//     return(2*3.14*radius);
//     }

// };

// int main(){
//     double length =10;
//     double breadth =7;
//     double radius =6;

//     geometry g1;
//     cout<<"rectangle area :"<<g1.area_rectangle(length,breadth);
// }

// class Box{
//     public:
//     double length;
//     double breadth;
//     double height;
// };

// int main(){
//     Box box1;
//     Box box2;
//     double volume =0.0;

//     box1.length =5.0;
//     box1.height=6;
//     box1.breadth=7;

//     box2.length=10;
//     box2.height=12;
//     box2.breadth=13;

//     volume = box1.length*box1.breadth*box1.height;
//     cout<<"volume of Box1 :"<<volume<<endl;

//     volume = box2.length*box2.breadth*box2.height;
//     cout<<"volume of Box2 :"<<volume<<endl;

//     return 0;

// }




class Student{
    public:
    int id;
    string name;
    void insert(int i, string n){
        id=i;
        name=n;
    }
    void display(){
        cout<<id<<"  "<<name<<endl;
    }

};

int main(){
    Student s1;
    Student s2;
    s1.insert(18,"nikhil");
    s2.insert(45,"jamwal");
    // s1.id=18;
    // s1.name="nikhil jamwal";
    // s2.id = 20;
    // s2.name ="jerry";
    s1.display();
    s2.display();
    // cout<<s1.id<<endl;
    // cout<<s1.name<<endl;
    // cout<<s2.id<<endl;
    // cout<<s2.name<<endl;
    return 0;
}