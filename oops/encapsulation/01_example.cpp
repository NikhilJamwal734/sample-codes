#include<iostream> 
using namespace std;

class adder{
    public:
    adder(int i =0){
        total =i;
    }

    void addNum(int number){
        total += number;
    }

    int getTotal(){
        return total;
    }

    private:
    int total;  // hidden data from the outside world
};

int main(){
    adder a;
    a.addNum(10);
    a.addNum(20);
    a.addNum(30);
    
    cout<< "total"<< a.getTotal() << endl;
    return 0;

}