 #include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int age;
    char grade;

public:
     
    Student(string studentName, int studentRollNo, int studentAge, char studentGrade) {
        name = studentName;
        rollNumber = studentRollNo;
        age = studentAge;
        grade = studentGrade;
    }

   
    string getName() const {
        return name;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    int getAge() const {
        return age;
    }

    char getGrade() const {
        return grade;
    }
 
    void setName(const string& newName) {
        name = newName;
    }

    void setRollNumber(int newRollNo) {
        rollNumber = newRollNo;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setGrade(char newGrade) {
        grade = newGrade;
    }
};

int main() {
    
    Student student("Ankit", 101, 20, 'A');
 
    student.setName("ankit");
    student.setRollNumber(102);
    student.setAge(21);
    student.setGrade('B');

  
    cout << "Updated Name: " << student.getName() << endl;
    cout << "Updated Roll No: " << student.getRollNumber() << endl;
    cout << "Updated Age: " << student.getAge() << endl;
    cout << "Updated Grade: " << student.getGrade() << endl;

    return 0;
}
