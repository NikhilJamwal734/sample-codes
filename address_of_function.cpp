#include <iostream>
using namespace std;

void myFunction() {
    cout << "Hello, World!" << endl;
}

int main() {
    cout << "Address of myFunction: " << (void*)myFunction << endl;
   return 0;
}
