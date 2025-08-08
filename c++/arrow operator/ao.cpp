#include<iostream>
using namespace std;

class arithmetic{
    int a,b;
    public:

   int sum(){
    return a+b;
   }

   void getdata(){
    cout<< "enter ist number";
    cin>>a;
    cout<< "enter the second number";
    cin>>b;
   }

};

int main(){
    arithmetic  num1,*ad;
    ad=&num1;

//    (*ad).getdata(); // it can also be written as
   ad->getdata();

//    cout<<(*ad).sum()<<endl; // it can also be written as
   cout<<ad->sum()<<endl;

    

}