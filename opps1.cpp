#include <iostream>
#include <string>
using namespace std;
//a constructor is a special member function that is called autometically when an object is created  it will have same name as class name 
//it will have no return type 
//parameterize constructor in which we pass the parameter
class student {
private:
    string name;
    double salary;
    int workExperience; 
    string organizationName;

public:
     
    student(string empName, double empSalary, int exp, string orgName) {
        name = empName;
        salary = empSalary;
        workExperience = exp;
        organizationName = orgName;
    }
    
    void printDetails() {
        cout << "NAME: " << name << endl;
        cout << "Salary  Rs : " << salary << endl;
    }
};

int main() {
    
    student emp1("ankit", 600.0, 5, "chuna company"); 

    emp1.printDetails();

    return 0;
}  
