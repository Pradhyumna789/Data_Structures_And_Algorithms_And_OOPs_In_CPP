#include<bits/stdc++.h>
using namespace std;


void printSubstrings(char str[]) {
    
    int len = strlen(str);
    
    for (int start = 0; start < len; start++) {
    for (int end = start; end < len; end++) {
        
        for (int i = start; i <= end; i++) {
            
            cout << str[i];
            
        }
        
        cout << endl;
        
        
    }    
        
        
    }
    
    
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}