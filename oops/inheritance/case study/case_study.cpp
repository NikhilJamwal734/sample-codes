#include<iostream>
#include<string>
using namespace std;

class Person{    // base class
    protected:
    string name;
    int age;
    int id;

    public:
    // Person(string personName , int personAge, int personId) : name(personName), age(personAge), id(personId){}

    Person(string personName , int personAge, int personId){
    name=personName;
    age = personAge;
    id = personId;
    }

  void displayPersonInfo() const {
    cout<< "NAME :"<< name <<endl;
    cout<< "AGE :"<< age <<endl;
    cout<< "ID :"<< id <<endl;
  }
};

// derived class : student (inherits from person)
class student : public Person{
    protected:
    string department;
    float gpa;

    public:
    // constructor for the student class
    student(string studentName, int studentAge, int studentId, string dept ,float studentGPA) : Person(studentName,studentAge,studentAge),department(dept), gpa(studentGPA){}//,department(dept),gpa(studentGPA){}
        // Person(studentName,studentAge,studentId);
    
        // method to display student details including personal info
        void displayStudentinfo() const {
            displayPersonInfo();
            cout<< "department:"<< department<<endl;
            cout << "GPA"<<gpa<< endl;
        }
    };

class Graduatestudent: public student{
    private:
        string researchTopic;

    public:
        // constructor for the GraduateStudent class
        Graduatestudent(string gradname, int gradAge, int gradID, string dept, float gradGPA, string topic):student(gradname, gradAge, gradID,dept,gradGPA), researchTopic(topic){}

        // Method to display graduateStudent details(including student and person info)

        void displayGraduateStudentInfo() const{
            displayStudentinfo();
            cout << "research topic: "<< researchTopic << endl;
        }
};

int main(){
    // creating an object of graduatestudent and display its details
    Graduatestudent gradstudent("Ravindra",35,8,"computer science",8.3,"Artificial intelligence");

    // Display information of the graduate student
    cout<< "graduate student information: " << endl;
    gradstudent.displayGraduateStudentInfo();

    return 0;
}