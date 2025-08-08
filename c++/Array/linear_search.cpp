#include<iostream>
using namespace std;

int main(){
    //  to initialize an array we must need to give either size or value
    int ar[]={12,23,43,64,77,93,20,55,26,68};
    // int ar[10];
    int size = sizeof(ar)/sizeof(int);
    int tar =77;
    int index =0;
    for(int i=0;i<size;i++){   // iterating over each index
        if(tar == ar[i]){
            index = i;
        }
    };
    cout<< "The index of target value is :"<<index<<endl;

}

