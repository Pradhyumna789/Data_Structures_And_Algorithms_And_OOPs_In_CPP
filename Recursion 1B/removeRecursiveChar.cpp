#include<bits/stdc++.h>
using namespace std;


string removeCharRecursive(string s, char x) {
    
    if (s.length() == 0) {
        
        return " ";
        
    }
    
    if (s[0] == x) {
        
        return removeCharRecursive(s.substr(1), x);
        
    }
    
    else {
        
        return s[0] + removeCharRecursive(s.substr(1), x);
        
    }
    
    
}


int main() {
    
    string s = "geeksforgeeks";
    
    char x = 'e';
    
    cout << removeCharRecursive(s, x) << endl;
    
    return 0;
    
}