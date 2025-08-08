#include <iostream>
using namespace std;

int display(){
    return 10;
}

int main(){
   int(*fptr)()=display;
   cout << fptr()<<endl;

}