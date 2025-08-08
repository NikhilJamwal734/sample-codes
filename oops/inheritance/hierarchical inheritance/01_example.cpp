#include<iostream>
using namespace std;


 //                   HIERARCHICAL INHERITANCE :- IN WHICH MORE THAN 1 CLASS INGERITING THE BASE CLASS 

class shape{       // declaration of base class.
    public:
    int a; int b;
    void get_data(int n,int m){
        a=n;
        b=m;
    }
};

class Rectangle: public shape{     // inheriting shape class
    public:
    int rect_area(){
        int result=a*b;
        return result;
    }
};

class Triangle : public shape{         // inheriting shape class
    public:
    int triangle_area(){
        float result=0.5*a*b;
        return result;
    }
};

int main(){

    Rectangle r;
    Triangle t;
    int length, breadth,base,height;

    cout<< "Enter the length and breadth of a rectangle: "<< endl;
    cin>> length, breadth;

    r.get_data(length,breadth);
    int m=r.rect_area();
    cout<< "Area of the rectangle is : " << m<< endl;

    cout<< "Entere the base and height of the triangle: "<< endl;
    cin>> base>> height;
    t.get_data(base,height);
    float n=t.triangle_area();
    cout<< "area of the triangle is : "<< n << endl;

    return 0;
};