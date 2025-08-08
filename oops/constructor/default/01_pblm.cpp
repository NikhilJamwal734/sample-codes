#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
    string title;
    string author;
    double price;

    public:
    // default constructor
    // Book(): title("atomic habits"),author("nikhil jamwal") , price(100.0){}

                                              // this can also be written as
    Book(){
        title ="atomic habits";
        author ="jamwal";
        price=100;
    }

    void displayBookdetails(){
        cout<< "Title :"<<title<<endl;
        cout<< "Author :"<<author << endl;
        cout<< "price :"<<price <<endl;
    }
};

int main(){
    Book myBook;

    cout<<"Book details"<<endl;
    myBook.displayBookdetails();

    return 0;
}