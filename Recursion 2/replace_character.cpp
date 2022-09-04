#include<bits/stdc++.h>
using namespace std;


void replaceCharacter(char s[], char c1, char c2) {
    
    if (s[0] == '\0') {
        
        return;
        
    }
    
    
    if (s[0] == c1) {
        
        s[0] = c2;
        
    }
    
    replaceCharacter(s + 1, c1, c2);
    
}


int main() {
    
    
    char s[100];
    char c1, c2;
    
    cin >> s;
    cin >> c1 >> c2;
    
    replaceCharacter(s, c1, c2);
    cout << s << endl;
    
}