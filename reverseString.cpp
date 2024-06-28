 #include <iostream>   
#include <stack>
#include <string>


using namespace std;

int main(){
    string str;
    stack<char> s;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
    s.push(str[i]);
     }



     for(int i=0;i<str.length();i++){
     char a = s.top();
     s.pop();
     cout<<a; 
    }
}