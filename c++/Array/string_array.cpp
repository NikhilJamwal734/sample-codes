#include<iostream>
using namespace std;

int main(){
    string str;  // dynamic in nature
    str="nikhil jamwal";
    getline(cin,str,'$');

    for(int i=0;i<str.length();i++){
        cout<< str[i]<< endl;
    }
    cout<< str;

    return 0;
}