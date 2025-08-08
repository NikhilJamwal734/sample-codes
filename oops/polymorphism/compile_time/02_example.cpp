#include <iostream>
using namespace std;


// overloading functinon to calculate the volume of a cube
double volume(double side){
    return side*side*side;
}

// overloading function to calculate the volume of a rectangluar box
double volume(double length, double width, double height){
    return length*width*height;
}

// overloaded fucntion to calculate teh volume of a cylinder
double volume(double radius, double height){
    return 3.14*radius*radius*height;
}

int main(){
    double side=5;
    double length=7,width=6,height=8;
    double radius=4,cylHeight=9;

    cout<< "volume of the cube :" << volume(side)<<endl;
    cout<< "volume of the rectangular box : "<< volume(length,width,height)<< endl;
    cout<< "volume of the cylinder : "<< volume(radius,cylHeight)<< endl;

    return 0;
}