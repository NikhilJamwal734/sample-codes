#include<iostream>
using namespace std;

class A{
    int a = 4;
    int b=5;
    
    public:
     int mul(){
        int c = a*b;
        return c;
     }
};

class B : private A{ // class A is privately inherited. Therefore, the mul() function of class A cannot be accessed by the object of class B. 
   //  It can only be accessed by the member function of class B
   // i.e     b.mul();  give an error
    public:
        void display(){
            int result = mul();
            cout << "multiplication of a and b is : " << result << endl;
        }
};

int main(){
    B b;
    b.display();

    return 0;
}