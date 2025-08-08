#include <iostream>
using namespace std;

// class circle{
//     public:
//     float radius;

//     float getRadius(){
//         cout<<"enter the radius of the circle :";
//         cin >> radius ;
//     }

//     float areaofCircle(){
//         cout<<"area of circle is :" << 3.12*radius*radius<< endl;
//     }
// };
 
// int main(){
//     circle c1 , c2 ;

//     c1.getRadius();
//     c1.areaofCircle();

//     c2.getRadius();
//     c2.areaofCircle();

//     return 0; 

// }

class msg{
    public:
    void printMessage();
};

void msg::printMessage(){
    cout<< "Hello learners"<<endl;
}

int main(){
    msg m1,m2;
    m1.printMessage();
    m2.printMessage();
}