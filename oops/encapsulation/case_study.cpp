#include<iostream>
#include <string>
using namespace std;

class Student{
    private:
    string name;
    int rollnum;
    char grade;

    public:
    Student(string studentName, int studentroll, char studentGrade){
        name = studentName;
        rollnum = studentroll;
        setGrade(studentGrade); // defined in line 38 this is used to check whether the grades are in particular range or not
    }

    string getName()const{
        return name;
    }

    void setName(string studentName){
        name = studentName;
    }

    int getRollNumber()const{
        return rollnum;
    }

    void setRollNumber(int studentRoll){
        rollnum= studentRoll;
    }

    char fetGrade() const{
        return grade;
    }

    void setGrade(char studentGrade){
        if(studentGrade >= 'A' && studentGrade <= 'F'){  // based on ASCII value (A to Z 65 to 90) and (a to z 97 to 122)
            grade = studentGrade;    
        }else{
            cout << "Invalid grade! grade must be between A and F." << endl;
        }
    }

    void displaystudentdetails()const{
        cout << "Student Name: " << name << endl;
        cout << "Roll number: " << rollnum << endl;
        cout << "Grade: " << grade << endl;
    };
};

int main(){
    Student student1("Pradeep",101, 'A');
    student1.displaystudentdetails();
    cout << endl;

    student1.setName("Himashu");
    student1.setGrade('B');

    cout << "Updated student details:" << endl;
    student1.displaystudentdetails();
    cout<< endl;

    student1.setGrade('Z');

    return 0;

}