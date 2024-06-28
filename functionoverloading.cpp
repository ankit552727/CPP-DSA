#include <iostream>
using namespace std;
 
int add(int a, int b) {
    return a + b;
}

 
int add(int a, int b, int c) {
    return a + b + c;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 3, num3 = 7;
    float float1 = 2.5, float2 = 3.7;

    cout << "Sum of " << num1 << " and " << num2 << " = " << add(num1, num2) << endl;
    cout << "Sum of " << num1 << ", " << num2 << ", and " << num3 << " = " << add(num1, num2, num3) << endl;
    cout << "Sum of " << float1 << " and " << float2 << " = " << add(float1, float2) << endl;

    return 0;
}
