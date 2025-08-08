#include<iostream>
using namespace std;

class Test{
    public:
    string testString;

    void setdata(string testString){
        this->testString = testString;
    }

    void getAndPrint(string str){
        this->setdata(str);
        cout<< "This string is:" << this->testString<< endl;

    }
};

int main(){
    Test test;

    test.getAndPrint("this is a test for memvber accession");
    return 0;
}