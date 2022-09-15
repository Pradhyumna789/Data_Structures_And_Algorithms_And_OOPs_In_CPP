#include<bits/stdc++.h>
using namespace std;


int keypad(int num, string output[], string options[]) {
    
    
    if (num == 0) {
        
        output[0] = "";
        return 1;
        
    }
    
    
    int lastDigit = num % 10;
    int smallNumber = num / 10;
    
    string smallOutput[100];
    
    int smallCount = keypad(smallNumber, smallOutput, options);
    string op = options[lastDigit];
    
    
    int k = 0;
    
    for (int i = 0; i < op.length(); i++) {
    for (int j = 0; j < smallCount; j++) {
        
    output[k] = smallOutput[j] + op[i];
    k++;
        
    }
        
        
    }
    
    return k;
    
    
}


int keypad(int num, string output[]) {
    
    string options[] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    return keypad(num, output, options);
    
}



int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}