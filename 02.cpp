#include <iostream>
using namespace std;

int climbStairs(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
}

int main() {
    int N = 3;   

    cout << "Number of ways = " << climbStairs(N) << endl;  
    
    return 0;
}
