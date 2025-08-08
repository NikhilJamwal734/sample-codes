#include<iostream>
using namespace std;

int gcd(int m, int n){
    while(m % n != 0){
        int r =m%n;
        m=n;
        n=r;
    }
    return n;
}

int main(){
    int a=36, b=24; // values will be copied into function
    cout << gcd(a,b) << endl;  // passing argument by value. 
}