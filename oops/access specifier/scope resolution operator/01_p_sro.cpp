#include <iostream>
using namespace std;

class Line{
    public:
    double length;
    void setLength(double len);
    double getLength(void);
};

// defining the function outside the class

double Line::getLength(void){
    return length;
}

void Line::setLength(double len){
    length = len;
}

int main(){
    Line line;

    line.setLength(6.5);
    cout<<"Length of line :"<<line.getLength()<<endl;

    line.length = 10;
    cout<<"Length of line :"<< line.length<<endl;

    return 0;
}