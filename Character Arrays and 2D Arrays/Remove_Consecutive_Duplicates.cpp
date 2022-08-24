#include<bits/stdc++.h>
using namespace std;


void removeConsecutiveDuplicates(char a[]) {
    
    int i;
    int newCharIndex = 1;
    char lastChar = a[0];
    int len = strlen(a);
    
    for (i = 0; i < len; ) {
        
        if (a[i] == lastChar) {
            
            i++;
            
        }
        
        else {
            
            a[newCharIndex] = a[i];
            lastChar = a[i];
            newCharIndex++;
            i++;
            
        }
        
       
    }
    
     a[newCharIndex] = '\0';
    
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}