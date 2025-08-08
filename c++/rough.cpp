#include<iostream>
using namespace std ;

// code to find the sum of natural number

int main(){

    int num;
    cout<<"enter the number";
    cin>>num;

    int ans=0;
    while(num>0){
        ans=ans+num;
        num-=1;
    }
    cout<<(ans);
}

// code to find the factorial of a given number


// int main(){
// int num;
// int fact=1;

// cout<<"enter the number";
// cin>> num;

// if(num<0){
//         cout<<"invalid";
//     }
//  else
//  {
//     while(num>0){
//         fact=fact*num;
//         num-=1;
//         }
//     cout<<fact;
//  }

