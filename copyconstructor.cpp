 #include <iostream>
#include <cstring> 
using namespace std;

class Student {
private:
    int rollNumber;
    char name[50];
    double fee;

public:

    Student(int rno, const char n[], double f) {
        rollNumber = rno;
        strcpy(name, n);
        fee = f;
    }
    Student(const Student& other) {
        rollNumber = other.rollNumber;
        strcpy(name, other.name);
        fee = other.fee;
    }

    void display() {
        cout << "Roll Number: " << rollNumber << "\nName: " << name << "\nFee: " << fee << endl;
    }
};

int main() {
    Student s1(1001, "Ankit", 5000.0);
    s1.display();
    Student s2 = s1;
    s2.display();

    return 0;
} 

 
