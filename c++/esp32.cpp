#include<iostream>
using namespace std;


int main(){
  const char *ssid = "wifi";
   int a=10;

   int *p =&a; 

    cout<<ssid<<endl;
    cout<<*p;
}