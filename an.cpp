#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
     
    map<int, string> myMap;

    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";
    myMap[4] = "Four";
    
    
    map<int, string>::iterator itr;

    
    for (itr = myMap.begin(); itr != myMap.end(); ++itr) {
         
        cout << itr->first << " => " << itr->second << endl;
    }

    return 0;
}
