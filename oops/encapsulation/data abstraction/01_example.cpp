/*
    Data abstraction focuses on providing only essential info to the ouside world and hiding the internal implemetation details.
    in c++ data abstraction is achieved using : classes to define the structure and bahavior.
    access specifirrs(private public protected) to control access to data members and methods.



*/

#include<iostream>
using namespace std;

class BankAccount{
    private:
    // private data member (hidden from the user)
        string accountnumber;
        double balance;

    public:
    // constructor to initialize account details
        BankAccount(string accnumber, double initialBalance){
            accountnumber = accnumber;
            balance = initialBalance;
        }

    void checkBalance(){
        cout << "Your current balance is: "<< balance<< endl;
    }

    void withdrawMoney(double amount){
        if(amount <= balance){
            balance -= amount;
            cout << " withdrawl successful! Your new balance is :"<< balance << endl;
        }else{
            cout<< "insufficient funds !"<< endl;
        }
    }

    void depositmoney(double amount){
        balance += amount;
        cout << "Deposit successful ! Your new balance is "<<balance << endl;
    }
};

int main (){
    BankAccount myaccount("123456789",1000);

    // myaccount.checkBalance();
    myaccount.depositmoney(5000);
    myaccount.checkBalance();
}