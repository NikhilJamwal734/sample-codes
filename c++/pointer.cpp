#include<iostream>
#include<array>
using namespace std;

int sum_of_elements(int a[]){
    int i,sum=0;
    for(i=0;i<=4;i++){
        sum=sum+a[i];
    }
        return sum;

}
int main(){

    int a[]={1,2,3,4,5};
    int total=sum_of_elements(a);
    int s= sizeof(a);
    cout<<s<<endl;
    cout<<total;

}

// int main(){
//     int a[]={3,5,7,9,1,14,16};
//     int *p=a;
//     for(int i=0;i<=7;i++){
//     cout<<a[i]<<endl;
//     cout<<&a[i]<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;


//     }
// }

// int main(){
// int ar[]={43,53,65,76,342,32,756464,2};
// int smallest =ar[0];
// int s=sizeof(ar)/sizeof(ar[0]);

// for(int i=0;i<=s;i++){
//     if(smallest > ar[i]){
//         smallest=ar[i];
//         int *ad=&ar[i];
//     }
// }
        
//         cout<<smallest<<endl;



// int ar[]={10,20,30,40,50};
// int length =sizeof(ar)/sizeof(ar[0]);
// int *p=ar;

// cout <<p<<endl;
// cout<<length<<endl;
// for(int i=0;i<=length;i++){
//     cout<<*(p+i)<<endl;
// }

    // int a=10;
    // int *p=&a;

    // cout<<"value of a is :"<<a<<endl;
    // cout<<"address stored at p is:"<<p<<endl;
    // cout<<"value stored at p is :"<<*p<<endl;

// void sum(int a){
// int s=0;
//     while(a>0){

//     s=s+a;
//     a-=1;
//     }
//     cout<<"the sum of given natural number is "<<s<<endl;
// }

// int main(){
//     int a;
//     cout<<"enetr the first n natural number: ";
//     cin>>a;
//     if(a>0)
//         sum(a);
//     else{
//     cout<<"please enter the positive number";
//     }   
    
    // }