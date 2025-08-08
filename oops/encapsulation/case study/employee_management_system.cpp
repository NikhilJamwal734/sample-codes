#include<iostream>
using namespace std;

class Employee{
    private:
        string empID;
        double salary;

    public:
        string name;

        Employee(string id, string empName, double empSalary){
        empID = id;
        name = empName;
        salary = empSalary;
        }
   

    void displayDetails(){
        cout << "Employee ID:"<< empID<< endl;
        cout << "Employee Name:"<< name << endl;
        cout << "salary :"<< salary << endl;
    }

    void updateSalary(double newSalary){
        if(newSalary>0){
            salary = newSalary;
        }else{
            cout << "Invalid salary !"<< endl;
        }
    }
    string getName(){
        return name;
    }

    double getSalary(){
        return salary;
    }
};

class Manager : public Employee{
    private:
        double bonus;

    public:
        Manager(string id, string empName, double empSalary, double empBonus ):
            Employee(id, empName,empSalary){
                bonus = empBonus;
            }
        
    void displayTotalCompensation(){
        cout << "Manager Name:" << getName()<< endl;
        cout << "Total compensation(salary + bonus): Rs"<< (bonus+getSalary())<< endl;
    }
        
};

int main(){
    Employee emp1("E101","pradeep",5000);
    emp1.displayDetails();
    emp1.updateSalary(50000);
}