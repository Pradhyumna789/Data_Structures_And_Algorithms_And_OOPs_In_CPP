#include<bits/stdc++.h>
using namespace std;

bool isPermutation(char char1[], char char2[]) {
    
    int len1 = strlen(char1); // len1 is the length of the string "char1"
    int len2 = strlen(char2); // len2 is the length of the string "char2"
    
    if (len1 != len2) {
        
        return false;
        
    }
    
    
    int frequency[256] = {0};
    
    for (int i = 0; i < len1; i++) {
        
        int index = char1[i];
        frequency[index]++;
        
    }
    
    for (int i = 0; i < len2; i++) {
        
        int index = char2[i];
        frequency[index]--;
        
    }
    
    for (int i = 0; i < 256; i++) {
        
        if (frequency[i] == 0) {
            
            return true;
            
        }
        
    
        
    }
    
    return false;
    
}

int main() {
    int size = 1e6;
    char char1[size];
    char char2[size];
    cin >> char1 >> char2;
    cout << (isPermutation(char1, char2) ? "true" : "false");
}