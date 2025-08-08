#include<iostream>
using namespace std;

//                      GETTER AND SETTER FUNCTION

class  Circle{
    private:
        double radius;

    public:
        void setRadius(double r){
            if(r>0){
                radius = r;
            }else{
                cout << "Please enter a valid radius."<< endl;
            }
        }

    double getRadius(){
        return radius;
    }

    double calculateArea(){
        return 3.14*radius*radius;
    }
};

int main(){
    Circle c;

    c.setRadius(5.0);
    cout << "Radius of the circle :" << c.getRadius() << endl;
    cout << "Area of the circle :"<< c.calculateArea()<< endl;

    return 0;
}