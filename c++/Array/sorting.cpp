#include <iostream>
using namespace std;

int main(){
    int size=5;
    int marks[size];

    for(int i=0; i<size; i++){
        cin >> marks[i];
    }

    int largest = marks[0];
    int index=0;
    for (int i=0 ; i<size; i++){
        if(marks[i]>largest){
            largest = marks[i];
            index=i;
        }
    }
    cout <<"largest number :"<< largest<<endl;
    cout <<"its index number :"<< index <<endl;
    
    return 0;
}