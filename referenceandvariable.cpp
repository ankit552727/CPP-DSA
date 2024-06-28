 //give the location of the variable in memory
//ptr is a specil kind of varible the store adress of variable


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

    // Using pointers
    int x = 42;
    int *ptr = &x;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    // Using references
    int y = 30;
    int &ref = y;
    cout << "Value of referenced variable: " << ref << endl;

    // Double pointer (pointer to pointer)
    int val = 169;
    int *ptr2 = &val;
    int **doublePtr = &ptr2;
    cout << "Value pointed to by doublePtr: " << **doublePtr << endl;

    return 0;
}
