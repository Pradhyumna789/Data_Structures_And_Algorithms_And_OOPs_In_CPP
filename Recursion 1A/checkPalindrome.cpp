#include<bits/stdc++.h>
using namespace std;

bool isPalindrome (char str[], int i, int j) { // i and j represents the starting and ending indices repectively
    
    if (str[i] != str[j]) {
        
        return false;
        
    }
    
    if (i >= j) {
        
        return true;
        
    }
    
    return isPalindrome(str, i + 1, j - 1);
    
    
}


bool checkPalindrome (char str[]) {
    
    int stringLength = 0;
    
    for (int i = 0; str[i] = '\0'; i++) {
        
        stringLength++;
        
    }
    
    return isPalindrome(str, 0, stringLength - 1);
    
    
}



int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}