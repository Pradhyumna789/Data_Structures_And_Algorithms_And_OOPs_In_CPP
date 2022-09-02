#include<bits/stdc++.h>
using namespace std;

int stringToNumber(string s) {
    
    if (s.length() == 0) {
        
        return 0;
        
    }
    
    int recursiveCall = stringToNumber(s.substr(1));
    
    int calculation = s[0] - '0';
    
    return (calculation * pow(10, s.length() - 1)) + recursiveCall;
}

int main() {
    char s[50];
    cin >> s;
    cout << stringToNumber(s) << endl;
}


/*
Alternative approach - Iterative approach

#include <bits/stdc++.h>
using namespace std;
 

int stringTointeger(string s) {
    
    int temp = 0;
    
    for (int i = 0; i < s.length(); i++) {
       
        temp = temp * 10 + (s[i] - '0');
    }
    return temp;
}
 

int main() {
    
    string s = "12345";
    
    cout << stringTointeger(s) << endl;
    
    return 0;
}

*/