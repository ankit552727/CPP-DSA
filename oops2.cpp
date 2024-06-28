#include <iostream>
#include <string>
using namespace std;

class student {
private:
    string name;
    double salary;
    int workExperience;
    string organizationName;

public:
    // Parameterized constructor
    student(string empName, double empSalary, int exp, string orgName) {
        name = empName;
        salary = empSalary;
        workExperience = exp;
        organizationName = orgName;
    }

    // Destructor
    ~student() {
        cout << "Destructor called for " << name << endl;
    }

    void printDetails() {
        cout << "NAME: " << name << endl;
        cout << "Salary Rs: " << salary << endl;
    }
};

int main() {
    student emp1("ankit", 600.0, 5, "chuna company");

    emp1.printDetails();

    // emp1 goes out of scope here, and the destructor is called automatically

    return 0;
}
