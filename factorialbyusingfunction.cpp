#include <iostream>
using namespace std;
 
long long calculateFactorial(int n) {
    if (n < 0) {
        cout << "Error! Factorial of a negative number doesn't exist.";
        return -1; 
    }

    long long result = 1;  

    for (int i = 1; i <= n; ++i) {
        result *= i;  
    }

    return result;
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    long long fact = calculateFactorial(num);

    if (fact != -1) {
        cout << "Factorial of " << num << " = " << fact;
    }

    return 0;
}
