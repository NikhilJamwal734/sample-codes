// add two complex numbers one is taken from the input , other is predefined and print the output

#include<iostream>
using namespace std;

class complex{
private:
    double real;
    double imaginary;

public:
    complex(double r,double i){
    real =r;
    imaginary=i;
    }

    complex add(complex c1,complex c2){
        double sumreal = c1.real +c2.real;
        double sumimaginary = c1.imaginary +c2.imaginary;
        return complex(sumreal,sumimaginary);
    }

    void display(){
        cout <<real<< " + " << imaginary << "i"<<endl;
    }

};

int main(){
    double userReal, userImaginary;

    cout<<"enter a complex number(real part):";
    cin>>userReal;

    cout<<"enter the imaginary part :";
    cin>>userImaginary;

    complex usercomplex(userReal,userImaginary);

    complex constructorComplex(3.5 ,2.0);

    complex result = result.add(usercomplex,constructorComplex);

    cout << "user's complex number : ";
    usercomplex.display();

    cout<<"complex number from constructor :";
    constructorComplex.display();

    cout << "sum of complex number :";
    result.display();

    return 0;
}