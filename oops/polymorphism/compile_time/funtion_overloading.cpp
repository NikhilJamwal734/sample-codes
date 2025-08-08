#include <iostream>
using namespace std;

// FUNCTIION OVERLOADING


// OVERLOADING FUNCTION TO CALCULATE THE AREA OF A CIRCLE
double area(double radius){
    return 3.14*radius*radius;
}

 // OVERLOADING FUNCTION TO CALCULATE THE AREA OF A RECTANGLE
double area(double len, double width){
    return len*width;
}

// OVERLOADING FUNCTION TO CALCULATE THE AREA OF A TRIANGLE
double area(double base,double height, bool isTriangle){
    return 0.5*base*height;
}

int main(){
     double radius = 5.0;
     double len =10, width = 4.0;
     double base = 6.0,height=3.0;

     cout<<"Area of circle: "<< area(radius)<< endl;
     cout<<"Area of rectangle: "<< area(len,width)<< endl;
     cout<<"Area of triangle: "<< area(base,height,true)<< endl;

     return 0; 

}