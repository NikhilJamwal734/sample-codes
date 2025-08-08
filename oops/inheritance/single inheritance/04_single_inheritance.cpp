#include<iostream>
using namespace std;

class vehicle{
    public:
    string brand;
    void showbrand(){
        cout<<"Brand :"<<brand<<endl;
    }
};

class car: public vehicle{
    public :
    string model;
    void showModel(){
        cout << "Model :"<<model << endl;
    }
};

int main(){
    car mycar;
    mycar.brand ="Toyota";
    mycar.model="corolla";

    mycar.showbrand();
    mycar.showModel();

    return 0;
}