#include<iostream>
using namespace std;

class Box{
    private:
         int length;

    public:
        Box(){
            length =10;
        }
        // Box():length(0){}
        friend int printlength(Box);
};

int printlength(Box b){
    b.length += 20;
    return b.length;
}

int main(){
    Box b;
    cout<< "length of box :"<< printlength(b)<< endl;
    return 0;
}