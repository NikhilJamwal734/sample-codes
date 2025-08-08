// problem statement :

// Design a class with a parameterized constructor that takes the radius as an argument
// and  calculate the area of the circle .


#include<iostream>
using namespace std;
#define pi 3.14
class Circle{
    public:
    float radius;

    Circle(float r) : radius(r){}

    // Circle(float r){
    //     radius =r;
    //  }
     float areaCircle(){
        cout<<"The area of circle with radius " << radius << " is " <<pi*radius*radius;
     }
};

int main(){
    float radius;

    cout<<"enter the redius of circle :"<<endl;
    cin>> radius;

    Circle  c1(radius);
    c1.areaCircle();


    // Circle c1 =Circle(5.5);
    // cout<<"The area of circle :";
    // c1.areaCircle();

    return 0;
}