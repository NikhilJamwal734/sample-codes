
// PROBLEM => Print the numbers from n to n-1 using recursion.

#include<iostream>
using namespace std;

void printNumber(int n){ // recursive function (a function which call itself again and again)
    if(n==1){
        cout<< "1\n";
        return ;
    }
    cout << n << " ";
    printNumber(n-1);
}

int main(){
        printNumber(10);

    return 0;
}