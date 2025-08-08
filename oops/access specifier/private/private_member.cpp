#include<iostream>
using namespace std;

// The member variables and member functions created under private can only be accessed from within the class or accessed by a friend function
// Only the class and friend function can access private members

class Box{
    public:
    int length;
    void setWidth(double wid);
    double getWidth(void);

    private:
    double width;
};

double Box::getWidth(void){
    return width;
}

void Box::setWidth(double wid){
    width = wid;
}

int main(){
    Box box;
    box.length=10;
    cout<<"Length of the box :"<<box.length<<endl;

    // box.width=10; // error because width is private
    
    box.setWidth(10);
    cout<<"width of the box :"<<box.getWidth()<<endl;
}