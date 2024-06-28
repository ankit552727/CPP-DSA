 #include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v[5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            v[i].push_back((i + 1) * (j + 1));
        }
    }
    for (int i = 0; i < 5; i++) {
     
        cout << "Vector " << i + 1 << ": ";
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}