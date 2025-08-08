#include<iostream>
using namespace std;

class Distance{
    private:
    int mtr;
    int cent_mtr;


    public:
    void get_distance(){
        cout<<"enter the  distane in meter :";
        cin>>mtr;
        cout<<"enter the distance in centimeter :";
        cin>>cent_mtr;
    }

    void display(){
        cout<< "distance :"<<mtr<<"meter"<< cent_mtr << "centimeter" << endl;
    }

    Distance add_distance(const Distance &d1 ,const Distance &d2){
        Distance result;
        result.mtr = d1.mtr + d2.mtr;
        result.cent_mtr = d1.cent_mtr + d2.cent_mtr;

        if (result.cent_mtr>=100){
            result.mtr += result.cent_mtr/100;
            result.cent_mtr = result.cent_mtr%100;
        }
    }

    

};

int main(){
    Distance d1,d2,result;

    cout<<"enter the first distance : "<<endl;
    d1.get_distance();
    cout<<"enter the second distance :"<<endl;
    d2.get_distance();

   result = result.add_distance(d1,d2);
   cout<<"sum of distance :"<<endl;
   result.display();

    return 0;

}