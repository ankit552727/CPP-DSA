#include <iostream>

using namespace std;

int main() {
    int n;
    long factorial = 1;  

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << " negative number ka factoraial nahi hota hai ";
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;  
        }
        cout << "Factorial of " << n << " = " << factorial; 
    }

    return 0;}
