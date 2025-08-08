
// The member variables and member functions created under public can be accessed from anywhere in the program

#include<iostream>
using namespace std;

class Line{
    public:
        double length;
        void setLength(double len);
        double getlength(void);
};

double Line::getlength(void){
    return length;
}