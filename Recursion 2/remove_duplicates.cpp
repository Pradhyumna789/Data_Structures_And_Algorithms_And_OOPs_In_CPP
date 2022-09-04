#include<bits/stdc++.h>
using namespace std;



void removeConsecutiveDuplicates(char s[]) {
    
    
    if (s[0] == '\0') {
        
        return;
        
    }
    
    
    if (s[0] != s[1]) {
        
        removeConsecutiveDuplicates(s + 1);
        
    }
    
    else {
        
        int i = 1;
        for (; s[i] != '\0'; i++) {
            
            s[i - 1] = s[i];
            
        }
        
        s[i - 1] = s[i];
        removeConsecutiveDuplicates(s);
        
    }
    
    
}


int main() {
    
    
    char s[100];
    cin >> s;
    
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}