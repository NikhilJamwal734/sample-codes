#include<iostream>
using namespace std;

int main(){
    int i =3;
    double d=2.5;

    double result =d/i;

    d=(double)i;    // explicit int to double
    i=(int)d;       // explicit double to int

    cout << i<< endl;
}